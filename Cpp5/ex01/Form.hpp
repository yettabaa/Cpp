/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:38:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/08 23:01:13 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool IsSigned;
	const int GradeToSign;
	const int GradeToExecute;
public:
	class GradeTooHighException : public std::exception // Nested Classes/custom class
	{
	private:
		const char* message;
		virtual const char* what() const throw();
	public:
		GradeTooHighException(const char* message);
	};
	class GradeTooLowException : public std::exception // Nested Classes/custom class
	{
	private:
		const char* message;
		virtual const char* what() const throw();
	public:
		GradeTooLowException(const char* message);
	};
	Form();
	Form(const std::string& name, const int& GradeToSign, const int& GradeToExecute);
	Form& operator=(const Form& overl);
	Form(const Form& copy);
	~Form();
	const std::string& getName() const;
	const bool& getIsSigned() const;
	const int& getGradeToSign() const;
	const int& getGradeToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& out, const Form& over);

#endif