/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:54:19 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/18 01:42:58 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    name = "default";    
}

Character::Character(const std::string &name)
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    this->name = name;
}

Character& Character::operator=(const Character &overl)
{
    if (this != &overl)
    {
        for (int i = 0; i < 4; i++)
        {
            delete slots[i];
            slots[i] = NULL;
            if (overl.slots[i])
            {
                slots[i] = overl.slots[i]->clone();
                *slots[i] = *overl.slots[i];
            }
        }
    }
    return(*this);
}

Character::Character(const Character &copy) 
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    *this = copy;
}

Character::~Character() 
{
    for (int i = 0; i < 4; i++) 
    {
        delete slots[i];
        slots[i] = NULL;
    }
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    i = 0;
    if (!m)
        return;
    while (i < 4 && slots[i])
        i++;
    if (i == 4)
    {
        std::cout << "Error: you should unequip materias" << std::endl;
        return ;
    }
    slots[i] = m->clone();
    *slots[i] = *m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !slots[idx])
    {
        std::cout << "Error: you can't unequip the index " << idx << " !" << std::endl;
        return ;
    }
    slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !slots[idx])
    {
        std::cout << "Error: There nothing to use !" << std::endl;
        return ;
    }
    slots[idx]->use(target);
}
