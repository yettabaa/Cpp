/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/09 20:39:51 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form form("testForm", 150, 1);
        std::cout << form << std::endl;
        Bureaucrat bureaucrat("testBureaucrat", 150);
        std::cout << bureaucrat << std::endl;
        form.beSigned(bureaucrat);
        
        bureaucrat.signForm(form);
    } 
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        // printf("%s\n", e.what());
    }
}
