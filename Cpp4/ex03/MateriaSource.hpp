/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:48:52 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/18 01:23:42 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int i;
    AMateria *materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    MateriaSource& operator=(const MateriaSource &overl);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria* materias);
    virtual AMateria* createMateria(std::string const & type);
};

 
#endif