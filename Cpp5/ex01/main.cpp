/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/11 23:37:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form form("testForm", 150, 151);
        std::cout << form << std::endl;
        Bureaucrat bureaucrat("testBureaucrat", 0);
        std::cout << bureaucrat << std::endl;
        form.beSigned(bureaucrat);
        
        bureaucrat.signForm(form);
    } 
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
        // printf("%s\n", e.what());
    }
}
