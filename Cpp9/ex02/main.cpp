/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:59 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 13:29:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
// v_int bablsort(v_int tab)
// {
//     size_t j;
//     for (size_t i =0; i < tab.size(); i++)
//     {
//         for (j = i; j < tab.size(); j++)
//         {
//             if (tab[i] > tab[j])
//                 std::swap(tab[i], tab[j]);
//         }
//     }
//     return tab;
// }
int main(int ac, char  *av[])
{
    // (void)av;
    try
    {
        if (ac < 2)
			throw std::runtime_error("invalid number of argument!");
        // v_int tab(parsing(av +1, ac));
        // std::cout << "ac = " << ac-1 <<'\n';
        // // for(int i=0; i < ac-1; i++)
        // //     std::cout << tab[i] << " ";
        // //     puts("");
        // clock_t start_time, end_time;


        // start_time = clock();
        // v_int bab = bablsort(tab);
        // // for(int i=0; i < ac-1; i++)
        // //     std::cout << bab[i] << " ";
        // //     puts("");
        // end_time = clock();
        // double elapsed_time1 = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
        // std::cout << "Elapsed time: " << elapsed_time1 << " seconds." << std::endl;
        
        
        // start_time = clock();
        // v_int so = sort(tab);
        // // for(int i=0; i < ac-1; i++)
        // //     std::cout << so[i] << " ";
        // //     puts("");
        // end_time = clock();
        // double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
        // std::cout << "Elapsed time: " << elapsed_time << " seconds." << std::endl;

        test(av+1, ac);
            
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
