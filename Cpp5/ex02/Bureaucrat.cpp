/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/10 02:49:40 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* message) : message(message) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* message) : message(message) {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (message);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return (message);
}

Bureaucrat::Bureaucrat() : name("default")
{
    grade = 150;
}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade) : name(name)
{
    if (grade <= 0)
        throw GradeTooHighException ("Bureaucrat creation failed, Grade is too high");
    if (grade > 150)
        throw GradeTooLowException ("Bureaucrat creation failed, Grade is too low");
    this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& overl) 
{
    if (this != &overl)
        grade = overl.grade;
    return(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const
{
    return (name);
}

const int& Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::increment_grade()
{
    if (grade - 1 == 0)
        throw GradeTooHighException ("increment grade failed, garde max is 0");
    grade--;
}

void Bureaucrat::decrement_grade()
{
    if (grade + 1 == 151)
        throw GradeTooLowException ("increment grade failed, garde min is 150");
    grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& over)
{
    out << over.getName() << ", bureaucrat grade " << over.getGrade() << ".";
    return out;
}

void Bureaucrat::signForm(const AForm& form)
{
    if (form.getIsSigned())
        std::cout << name << " signed " << form.getName() << std::endl;
    else
        std::cout << name << " couldn’t sign " << form.getName() 
        << " because he doesn't have required grade" << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
    
}