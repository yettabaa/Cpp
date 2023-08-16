/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 19:38:01 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

void f()
{
    system("leaks a.out");
}

int main() 
{
    {
        const Animal *meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        std::cout << "getType of Animal =>: " << meta->getType() << " " << std::endl;
        std::cout << "getType of Dog =>: " << j->getType() << " " << std::endl;
        std::cout << "getType of Cat =>: " << i->getType() << " " << std::endl;
        std::cout << "Sound of Animal =>: ";
        meta->makeSound();
        std::cout << "Sound of Dog =>: ";
        j->makeSound();
        std::cout << "Sound of Cat =>: ";
        i->makeSound();
        delete i;
        delete j;
        delete meta;
    }
    std::cout << "\n* The Wrong Implementation ! *\n" << std::endl;
    {
        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal * i = new WrongCat();
        
        std::cout << "getType of WrongAnimal =>: " << meta->getType() << " " << std::endl;
        std::cout << "getType of WrongCat =>: " << i->getType() << " " << std::endl;
        std::cout << "Sound of WrongAnimal =>: ";
        meta->makeSound();
        std::cout << "Sound of WrongCat =>: ";
        i->makeSound();
        delete i;
        delete meta;
    }
    // atexit (f);
    return 0; 
}
