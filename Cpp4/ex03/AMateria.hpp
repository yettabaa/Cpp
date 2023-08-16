/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:45 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 21:59:00 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iomanip>
#include <iostream>


#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria& operator=(const AMateria &overl);
    AMateria(const AMateria &copy);
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual ~AMateria();
    virtual void use(ICharacter& target);
};

#include "Cure.hpp"
#include "Ice.hpp"

#endif