/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 00:31:01 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("testBureaucrat", 1);
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(bureaucrat);
		rrf->execute(bureaucrat);
		delete(rrf);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
