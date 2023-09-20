/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:36:52 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/17 01:25:20 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}
