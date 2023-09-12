/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 01:59:47 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm Shrubbery("shrubb");
        RobotomyRequestForm Robo("robo");
        PresidentialPardonForm president("president");
        Bureaucrat bureaucrat("testBureaucrat", 1);
        std::cout << bureaucrat << std::endl;
        Shrubbery.beSigned(bureaucrat);
        Robo.beSigned(bureaucrat);
        president.beSigned(bureaucrat);
        // Shrubbery.execute(bureaucrat);
        bureaucrat.executeForm(Shrubbery);
        bureaucrat.executeForm(Robo);
        president.execute(bureaucrat);
    } 
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
        // printf("%s\n", e.what());
    }
}
