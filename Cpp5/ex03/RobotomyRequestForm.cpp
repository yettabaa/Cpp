/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:40:50 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 00:31:51 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default_Shrubbery", 72, 45), target("default") {} // the attribute of form is private so we initialized with Aform

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm(target + "_Shrubbery", 72, 45), target(target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &overl)
{
    if (this != &overl)
        target = overl.target;
    return (*this);    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy.target + "_Shrubbery", 72, 45)
{
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
        throw ThrowErros ("Form not signed");  
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException ("the Bureaucrat can't execute RobotomyRequest");
    std::srand(std::time(NULL));
    if (std::rand() % 2 == 0)
        std::cout << target << " has been robotomized" << std::endl;
    else
        std::cout << "the robotomy failed" << std::endl;
            
}