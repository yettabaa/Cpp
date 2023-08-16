/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:48:52 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 16:07:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

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
#include "Ice.hpp"
#include "Cure.hpp" 
 
#endif