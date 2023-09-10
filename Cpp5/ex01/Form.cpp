/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:38:25 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/09 20:38:55 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::GradeTooHighException::GradeTooHighException(const char* message) : message(message) {}

Form::GradeTooLowException::GradeTooLowException(const char* message) : message(message) {}

const char* Form::GradeTooHighException::what() const throw()
{
	return (message);
	// return ("Form: Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (message);
	// return ("Form: Grade is too low");
}

Form::Form() : name("default"), GradeToSign(150), GradeToExecute(150)
{
	IsSigned = false;
}

Form::Form(const std::string& name, const int& GradeToSign, const int& GradeToExecute) : name(name), GradeToSign(GradeToSign), GradeToExecute(GradeToExecute)
{
	if (GradeToSign < 1)
		throw GradeTooHighException ("Form creation failed, Grade to Sign is too high");
	if (GradeToExecute < 1)
		throw GradeTooHighException ("Form creation failed, Grade to execute is too high");
	if (GradeToSign > 150)
		throw GradeTooLowException ("Form creation failed, Grade to Sign is too low");
	if (GradeToExecute > 150)
		throw GradeTooLowException ("Form creation failed, Grade to execute is too low");
	IsSigned = false;	
}

Form& Form::operator=(const Form& overl) 
{
	if (this != &overl)
		IsSigned = overl.IsSigned;
	return(*this);
}

Form::Form(const Form& copy) : name(copy.name), GradeToSign(copy.GradeToSign), GradeToExecute(copy.GradeToSign)
{
	if (GradeToSign < 1)
		throw GradeTooHighException ("Form copy creation failed, Grade to Sign is too high");
	if (GradeToExecute < 1)
		throw GradeTooHighException ("Form copy creation failed, Grade to execute is too high");
	if (GradeToSign > 150)
		throw GradeTooLowException ("Form copy creation failed, Grade to Sign is too low");
	if (GradeToExecute > 150)
		throw GradeTooLowException ("Form copy creation failed, Grade to execute is too low");
	*this = copy;
}

Form::~Form() {	}

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
	out << "Form " << over.getName() << ", GradeToSign " << over.getGradeToSign() 
		<<  ", GradeToExecute " << over.getGradeToExecute();
	if (over.getIsSigned())
		out << ", this form is signed";
	else
		out << ", this form is not signed";
	return (out);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	// printf("ghs %d dd %d\n", bureaucrat.getGrade() , GradeToSign);
	if (bureaucrat.getGrade() <= GradeToSign)
		IsSigned = true;
	else
		throw GradeTooLowException("Form can't be signed");
}