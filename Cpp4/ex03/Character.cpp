/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:54:19 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 14:41:54 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
    std::cout << "Character Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        slots[i] = nullptr;
    for (int i = 0; i < 13; i++) //max saze of holder
        holder[i] = nullptr;
    name = "default";    
}

Character::Character(const std::string &name)
{
    std::cout << "Character Parameterized constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        slots[i] = nullptr;
    for (int i = 0; i < 13; i++) //max saze of holder
        holder[i] = nullptr;
    this->name = name;
}

Character& Character::operator=(const Character &overl)
{
    std::cout << "Character Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        for (int i = 0; i < 4; i++)
        {
            delete slots[i];
            slots[i] = nullptr;
            // if (overl.slots[i] && overl.slots[i]->getType() == "ice")
            // {
                // slots[i] = new Ice;
                slots[i] = overl.slots[i]->clone();
                *slots[i] = *overl.slots[i];
            // }
            // else if (overl.slots[i] && overl.slots[i]->getType() == "cure")
            // {
            //     slots[i] = new Cure;
            //     *slots[i] = *overl.slots[i];
            // }
        }
        for (int i = 0; i < 13; i++)
        {
            delete holder[i];
            holder[i] = nullptr;
            // if (overl.holder[i] && overl.holder[i]->getType() == "ice")
            // {
                holder[i] = overl.holder[i]->clone();
                *holder[i] = *overl.holder[i];
            // }
            // else if (overl.holder[i] && overl.holder[i]->getType() == "cure")
            // {
            //     holder[i] = new Cure;
            //     *holder[i] = *overl.holder[i];
            // }
        }
    }
    return(*this);
}

Character::Character(const Character &copy) 
{
    std::cout << "Character Copy constructor called" << std::endl;
    *this = copy;
}

Character::~Character() 
{
    std::cout << "Character Destructor called" << std::endl;  
    for (int i = 0; i < 13; i++)
    {
        delete holder[i];
        holder[i] = nullptr;
    }
    for (int i = 0; i < 4; i++) 
    {
        delete slots[i];
        slots[i] = nullptr;
    }
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    i = 0;
    while (i < 4 && slots[i])
        i++;
    if (i == 4)
    {
        std::cout << "Error: you should uneauip materias" << std::endl; // edit
        return ;
    }
    if (m->getType() == "ice")
        slots[i] = new Ice;
    else if (m->getType() == "cure") 
        slots[i] = new Cure;
    // in case there is inother type  
    *slots[i] = *m;    
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !slots[idx])
    {
        std::cout << "Error: you can't unequip the index " << idx << " !" << std::endl; //!!
        return ; //shi msg
    }
    i = 0;
    while (i < 13 && holder[i])
        i++;
    if (i == 13)
    {
        std::cout << "Error: you attind the number maxmium of uniquipe" << std::endl;
        return ;
    }
    holder[i] = slots[idx];
    slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !slots[idx])
    {
        std::cout << "Error: There nothing to use !" << std::endl; // !!
        return ; //shi msg
    }
    slots[idx]->use(target);
    
}
