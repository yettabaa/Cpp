/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:35:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 15:43:22 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *objs;
    
    objs = new(std::nothrow) Zombie[N];
    if (!objs)
        exit(1);
    for(int i = 0; i < N; i++)
        objs[i].set(name);
    return(objs);
}