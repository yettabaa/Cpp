/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 18:56:34 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void f()
{
    system("leaks a.out");
}

int main() 
{
    // atexit (f);
    
    const Animal* meta = new Animal();  // Subtype Polymorphism 
    const Animal* j = new Dog();
    const Animal* i = new Cat(); // whay we marked a const function
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    //  ...
    return 0; 
}
