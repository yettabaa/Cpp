/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/15 23:25:56 by yettabaa         ###   ########.fr       */
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
    // Dog a;

    // std::cout << "main  " << &a << std::endl;
    // const Animal *meta = &a;  // Subtype Polymorphism 
    const Animal *meta = new Dog();  // Subtype Polymorphism 
    //  std::cout << "main  " << meta <<std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat(); // whay we marked a const function
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << "-"<< meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    // meta->makeSound();

    delete i;
    delete j;
    // delete meta;
    //  ...
    return 0; 
}
