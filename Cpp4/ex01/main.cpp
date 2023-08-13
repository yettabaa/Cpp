/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:30:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/13 23:55:06 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void f()
{
    system("leaks a.out");
}

int main() 
{
    atexit (f);
    {
        const Animal* j = new Dog(); 
        const Animal* i = new Cat();
        delete j;//should not create a leak 
        delete i;
    }
    std::cout << "--------------------------------" << std::endl;
    {
        Animal **array_of_animal = new Animal*[8];
        for(int i = 0; i < 4 ; i++)
            array_of_animal[i] = new Dog();
        for(int i = 4; i < 8 ; i++)
            array_of_animal[i] = new Cat();
        for(int i = 0; i < 4 ; i++)
            array_of_animal[i].ma;
    }

    //  ...
    return 0; 
}
