/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:22:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/07/25 04:36:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // for std::cout and std::endl

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
    while (av[++i])
    {
        int j = -1;
        while (av[i][++j])
            (islower(av[i][j])) && (av[i][j] -= 32);
        std::cout << av[i];
    }
    std::cout << '\n';
}