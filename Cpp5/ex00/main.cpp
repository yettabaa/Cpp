/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 23:47:29 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("test", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrement_grade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.increment_grade();
        std::cout << bureaucrat << std::endl;
    } 
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
