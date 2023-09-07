/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 23:56:08 by yettabaa         ###   ########.fr       */
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
    // AAnimal aanimal;

    const AAnimal* j = new Dog(); 
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    std::cout << "--------------------------------" << std::endl;
    AAnimal **array_of_animal = new AAnimal*[6];
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
// atexit (f);
    return 0; 
}
