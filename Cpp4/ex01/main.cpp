/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:08:05 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void f()
{
    system("leaks a.out");
}

int main() 
{
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();
    delete j;//should not create a leak 
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
    
    // Animal m;
    // {
    //     Animal z =m;
    //     m=z;
    // }
    // atexit (f);

    //  ...
    return 0; 
}
