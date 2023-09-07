/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:25:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/18 01:44:00 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp" 
void f()
{
    system("leaks a.out");
}
int main() 
{
    IMateriaSource* src = new MateriaSource(); 
    AMateria* hold = new Ice();
    
    src->learnMateria(hold);
    delete hold;
    hold = new Cure();
    src->learnMateria(hold);
    delete hold;
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice"); 
    me->equip(tmp);
    delete tmp; 
    tmp = src->createMateria("cure"); 
    me->equip(tmp);
    delete tmp; 
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob; 
    delete me; 
    delete src;
    atexit (f);
    return 0; 
}
