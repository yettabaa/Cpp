/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:22:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 09:49:52 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i, j = 0;
    std::string str;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
    while (av[++j])
    {
        i = -1;
        while (av[j][++i])
            str += std::toupper(av[j][i]);
    }
    std::cout << str << std::endl;
}
