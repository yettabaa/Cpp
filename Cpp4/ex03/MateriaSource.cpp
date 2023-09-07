/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:49:40 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/18 01:38:15 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &overl)
{
    if (this != &overl)
    {
        for (int i = 0; i < 4; i++)
        {
            delete materias[i];
            materias[i] = NULL;
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
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    *this = copy;
}

MateriaSource::~MateriaSource()
{
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
    this->materias[i] = materias->clone();
    *this->materias[i] = *materias;
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
