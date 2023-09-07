/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:38:25 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/08 00:53:00 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Form::Form()
{
}

Form::Form(const std::string& name, const int& GradeToSign, const int& GradeToExecute)
{
	
}

Form& Form::operator=(const Form& overl)
{
	(void)overl;
	return(*this);
}

Form::Form(const Form& copy)
{
	(void)copy;
}

Form::~Form()
{
	
}

const std::string& Form::getName() const
{
	return (name);
}

const bool& Form::getIsSigned() const
{
	return (IsSigned);
}

const int& Form::getGradeToSign() const
{
	return (GradeToSign);
}

const int& Form::getGradeToExecute() const
{
	return (GradeToExecute);
}

std::ostream& operator<<(std::ostream& out, const Form& over)
{
	
}

void Form::beSigned()
{
	
}