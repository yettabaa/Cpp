/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:15 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 00:08:54 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form form("test_Form", 1, 1);
		std::cout << form << std::endl;
		Form form1("test1_Form", 10, 10);
		std::cout << form1 << std::endl;
		Bureaucrat bureaucrat("test_Bureaucrat", 1);
		std::cout << bureaucrat << std::endl;
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		bureaucrat.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
