/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 00:12:02 by yettabaa         ###   ########.fr       */
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
		Bureaucrat bureaucrat("testBureaucrat", 0);
		// std::cout << bureaucrat << std::endl;
		// Shrubbery.beSigned(bureaucrat);
		bureaucrat.signForm(Shrubbery);
		// Robo.beSigned(bureaucrat);
		// president.beSigned(bureaucrat);
		// Shrubbery.execute(bureaucrat);
		// bureaucrat.executeForm(Shrubbery);
		// bureaucrat.executeForm(Robo);
		// president.execute(bureaucrat);
	} 
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
