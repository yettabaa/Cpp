/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:25:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 14:41:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
// #include "AMateria.hpp"
// Interface class is purely a definition part, and no implementation is provided in that class.
//cerculare headrs

void f()
{
    system("leaks a.out");
}

int main()
{
    Character a("jissm gharib");
    Character b;
    // Character * b = new(Character);
    Ice materia1;
    Cure materia2;
    AMateria *materia3 = new Ice;
    AMateria *materia4 = new Cure;
    // AMateria *materia5 = new AMateria("test");

    // a.set_sizeHolder(8);
    a.equip(&materia2);
    a.equip(&materia2);
    a.equip(materia3);
    a.equip(materia4);
    b.equip(&materia1);
    b.equip(&materia2);
    b.equip(materia3);
    b.equip(materia4);
    // b->equip(&materia1);
    // b->equip(&materia2);
    // b->equip(materia3);
    // b->equip(materia4);
    // b.unequip(3);
    // b.unequip(2);
    // b.unequip(1);
    // b.unequip(0);
    // a.unequip(3);
    // a.unequip(2);
    // a.unequip(1);
    // a.unequip(0);
    b.use(0, b);
    b = a;
    b.use(1, b);
    b.use(2, b);
    b.use(3, b);
    a.use(0, a);
    a.use(1, a);
    a.use(2, a);
    a.use(3, a);
    delete materia3;
    delete materia4;
    //  atexit (f);
    return 0;
}
