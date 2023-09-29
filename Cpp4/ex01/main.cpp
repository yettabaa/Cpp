/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/29 05:14:45 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
void f()
{
    system("leaks a.out");
}
int main() 
{
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << "--------------------------------" << std::endl;
    Animal **array_of_animal = new Animal*[6];
    
    for(int i = 0; i < 3 ; i++)
        array_of_animal[i] = new Dog();
    for(int i = 3; i < 6 ; i++)
        array_of_animal[i] = new Cat();
    for(int i = 0; i < 3 ; i++)
        array_of_animal[i]->makeBrain();
    for(int i = 3; i < 6 ; i++)
        array_of_animal[i]->makeBrain();
    for(int i = 0; i < 6; i++)
        delete array_of_animal[i];
    delete[] array_of_animal;
    Dog a;
    Dog b;
    a=b;
    
    atexit (f);
    return 0; 
}
