/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:45 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 23:41:53 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iomanip>
#include <iostream>

#include "ICharacter.hpp"

class AMateria : public ICharacter
{
protected:
    std::string type;
    // [...]
public:
    AMateria();
    AMateria& operator=(const AMateria &overl);
    AMateria(const AMateria &copy);
    ~AMateria();
    AMateria(std::string const & type); 
    // [...]
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};




#endif