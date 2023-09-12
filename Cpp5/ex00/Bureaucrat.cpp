/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 02:24:58 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

Bureaucrat::Bureaucrat() : name("default")
{
    grade = 150;
}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade) : name(name)
{
    if (grade <= 0)
        throw GradeTooHighException ();
    if (grade > 150)
        throw GradeTooLowException ();
    this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& overl) 
{
    if (this != &overl)
        grade = overl.grade;
    return(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
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
        throw GradeTooHighException ();
    grade--;
}

void Bureaucrat::decrement_grade()
{
    if (grade + 1 == 151)
        throw GradeTooLowException ();
    grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& over)
{
    out << over.getName() << ", bureaucrat grade " << over.getGrade() << ".";
    return out;
}
