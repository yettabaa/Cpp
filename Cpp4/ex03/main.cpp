/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:25:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:44:53 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
// #include "AMateria.hpp"
// Interface class is purely a definition part, and no implementation is provided in that class.
//cerculare headrs

void f()
{
    system("leaks a.out");
}

// int main()
// {
//     Character a("jissm gharib");
//     ICharacter *b =  new(Character);
//     Ice *materia1 = new(Ice);
//     Cure *materia2 = new(Cure);
//     AMateria *materia3 = new Ice;
//     AMateria *materia4 = new Cure;
//     MateriaSource source;

//     source.learnMateria(materia1);
//     source.learnMateria(materia2);
//     source.learnMateria(materia3);
//     source.learnMateria(materia4);


//     // a.equip(source.createMateria("ice"));
//     // a.equip(&materia2);
//     // a.equip(materia3);
//     // a.equip(materia4);
//     // b->equip(&materia1);
//     // b->equip(&materia2);
//     // b->equip(materia3);
//     // b->equip(materia4);
//     // puts("a-a-a-a-a-a-a-a-a-a-a-a-a-a-a");
//     // a.use(0, a);
//     // a.use(1, a);
//     // a.use(2, a);
//     // a.use(3, a);
//     // puts("b-b-b-b-b-b-b-b-b-b-bb-b-");
//     // // b = a;
//     // b->use(0, *b);
//     // b->use(1, *b);
//     // b->use(2, *b);
//     // b->use(3, *b);

//     // MateriaSource ms1;

//     // {
//     //     MateriaSource ms2;
//     //     ms2 = ms1;
//     // }
//     MateriaSource ms1;
//     {
//         MateriaSource ms2 = ms1;
//     }

//     Character c1;
//     {
//         Character c2 = c1;
//     }
    
//     delete b;
//     //  atexit (f);
//     return 0;
// }

int main() 
{
    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());
    
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
    // atexit (f);
    return 0; 
}