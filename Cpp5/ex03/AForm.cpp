/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:38:25 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/09 20:38:55 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::GradeTooHighException::GradeTooHighException(const char* message) : message(message) {}

AForm::GradeTooLowException::GradeTooLowException(const char* message) : message(message) {}

AForm::ThrowErros::ThrowErros(const char* message) : message(message) {}

const char* AForm::GradeTooHighException::what() const throw()
{
	std::cerr << "Grade is too high, ";
	return (message);
}

const char* AForm::GradeTooLowException::what() const throw()
{
	std::cerr << "Grade is too low, ";
	return (message);
}

const char* AForm::ThrowErros::what() const throw()
{
	return (message);
}

AForm::AForm() : name("default"), GradeToSign(150), GradeToExecute(150)
{
	IsSigned = false;
}

AForm::AForm(const std::string& name, const int& GradeToSign, const int& GradeToExecute) : name(name), GradeToSign(GradeToSign), GradeToExecute(GradeToExecute)
{
	if (GradeToSign < 1 || GradeToExecute < 1)
		throw GradeTooHighException ("Form creation failed.");
	if (GradeToSign > 150 || GradeToExecute > 150)
		throw GradeTooLowException ("Form creation failed.");
	IsSigned = false;	
}

AForm& AForm::operator=(const AForm& overl) 
{
	if (this != &overl)
		IsSigned = overl.IsSigned;
	return(*this);
}

AForm::AForm(const AForm& copy) : name(copy.name), GradeToSign(copy.GradeToSign), GradeToExecute(copy.GradeToSign)
{
	*this = copy;
	if (GradeToSign < 1 || GradeToExecute < 1)
		throw GradeTooHighException ("copy contructor Form creation failed.");
	if (GradeToSign > 150 || GradeToExecute > 150)
		throw GradeTooLowException ("copy contructor Form creation failed.");
}

AForm::~AForm() {}

const std::string& AForm::getName() const
{
	return (name);
}

const bool& AForm::getIsSigned() const
{
	return (IsSigned);
}

const int& AForm::getGradeToSign() const
{
	return (GradeToSign);
}

const int& AForm::getGradeToExecute() const
{
	return (GradeToExecute);
}

std::ostream& operator<<(std::ostream& out, const AForm& over)
{
	out << "AForm " << over.getName() << ", GradeToSign " << over.getGradeToSign() 
		<<  ", GradeToExecute " << over.getGradeToExecute();
	if (over.getIsSigned())
		out << ", this Aform is signed";
	else
		out << ", this Aform is not signed";
	return (out);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	// printf("ghs %d dd %d\n", bureaucrat.getGrade() , GradeToSign);
	if (bureaucrat.getGrade() > GradeToSign)
		throw GradeTooLowException("AForm can't be signed");
	IsSigned = true;
}