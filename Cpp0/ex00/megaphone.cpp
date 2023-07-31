/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:22:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/07/31 23:15:33 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
// int main(int ac, char **av)
// {
//     int i = 0;

//     if (ac == 1)
//         return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
//     while (av[++i])
//     {
//         int j = -1;
//         while (av[i][++j])
//             (islower(av[i][j])) && (av[i][j] -= 32);
//         std::cout << av[i];
//     }
//     std::cout << '\n';
// }

int main(int ac, char **av) 
{
    int i = 0;
    std::string tmp;;
    std::stringstream av_cpp;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    while (av[++i])
        av_cpp << av[i] && ((av[i +1] && *av[i +1]) && av_cpp << ' ');
    i = -1;
    std::getline(av_cpp, tmp);
    while (tmp[++i])
        (islower(tmp[i])) && (tmp[i] -= 32);
    std::cout << tmp << std::endl;
}
