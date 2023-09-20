/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:03:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/17 01:17:57 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    Data *hold;
    uintptr_t ptr;

    data.i = 13;
    data.j = 37;
    data.c = 'o';
    // ptr = Serializer::serialize(&data);
    ptr = dynamic_cast<uintptr_t>(&data);
    std::cout << &data << std::endl;
    std::cout << "i = " << data.i << " ,j = " << data.j << " ,c = " << data.c << std::endl;
    // hold = Serializer::deserialize(ptr);
    hold = dynamic_cast<Data *>(ptr);
    std::cout << hold << std::endl;
    std::cout << "i = " << hold->i << " ,j = " << hold->j << " ,c = " << hold->c << std::endl;
    std::cout << std::hex << ptr << std::endl;
    return 0;
}
