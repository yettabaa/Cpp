/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:49:40 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:43:14 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &overl)
{
    std::cout << "MateriaSource Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        for (int i = 0; i < 4; i++)
        {
            delete materias[i];
            materias[i] = NULL; // change to NULL
            if (overl.materias[i])
            {
                materias[i] = overl.materias[i]->clone();
                *materias[i] = *overl.materias[i];
            }
        }
    }
    return(*this);
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource Copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    *this = copy;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete materias[i];
        materias[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* materias)
{
    i = 0;
    while (i < 4 && this->materias[i])
        i++;
    if (i >= 4)
    {
        std::cout << "Error: You can learn just 4 materias !" << std::endl;
        return ;
    }
    this->materias[i] = materias;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    i = 0;
    while (i < 4)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
            return(materias[i]->clone());
        i++;
    }
    std::cout << "Error: There is no type called " << type << " !" << std::endl;
    return NULL;
}
