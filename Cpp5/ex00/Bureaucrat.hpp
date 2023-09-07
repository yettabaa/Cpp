/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:11 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/08 00:37:40 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	// custom class is created which inherits all properties from the std::exception class
	class GradeTooHighException : public std::exception // Nested Classes/custom class
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception // Nested Classes/custom class
	{
		virtual const char* what() const throw();
	};
	Bureaucrat();
	Bureaucrat(const std::string& name, const int& grade);
	Bureaucrat& operator=(const Bureaucrat& overl);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	const std::string& getName() const;
	const int& getGrade() const;
	void increment_grade();
	void decrement_grade();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& over);

#endif