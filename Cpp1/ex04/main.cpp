/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 02:01:29 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/12 19:22:46 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

//make && ./ex04 Makefile C CC
//make && ./ex04 Makefile "" "c"
// put it in a function

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
    
    std::ifstream inf(av[1]);
    if (!inf.is_open())
        return(std::cerr << "permission denied!" << std::endl, 1);
    std::ofstream outf(file + ".replace");
    if (!outf)
        return(std::cerr << "permission denied!" << std::endl, 1);
    std::getline(inf, str, '\0');
    outf << _replace(str, s1, s2);
    return(0);
}

// class Main
// {
// private:
//     int x;
// public:
    
//     Main(int x,int y) {
//         this->x = x;
//     }
//     ~Main();
// };

// int main()
// {
//     Main test = 3;
    
    
//     return 0;
// }
