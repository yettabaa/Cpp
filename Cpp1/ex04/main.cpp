/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 02:01:29 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 02:08:02 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "invalid number of argument!" << std::endl;
        return (1);
    }
    std::string str;
    std::string file = av[1];
    std::string s2 = av[3];
    std::string s1 = av[2];
    size_t pos = 0;
    std::ifstream inf(av[1]);
    std::ofstream outf(file + ".replace");
    if (!inf || !outf) //it return a bool
        return(std::cerr << "permission denied!" << std::endl, 1);
    std::getline(inf, str, '\0');
    while ((pos = str.find(s1)) != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
    outf << str;
    return(0);
}