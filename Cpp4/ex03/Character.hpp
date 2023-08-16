/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:53:12 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 00:21:25 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    int i;
    std::string name;
    AMateria *slots[4];
    AMateria *holder[13]; //
public:
    Character(); 
    Character& operator=(const Character &overl);
    Character(const Character &copy); 
    Character(const std::string &name);
    virtual ~Character(); 
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);//
    virtual void unequip(int idx);//
    virtual void use(int idx, ICharacter& target);//
};

#endif