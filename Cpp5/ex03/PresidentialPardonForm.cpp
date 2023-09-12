/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:47:30 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 00:31:43 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default_Shrubbery", 25, 5), target("default") {} // the attribute of form is private so we initialized with Aform

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm(target + "_Shrubbery", 25, 5), target(target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &overl)
{
    if (this != &overl)
        target = overl.target;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy.target + "_Shrubbery", 25, 5)
{
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
        throw ThrowErros ("Form not signed");  
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException ("the Bureaucrat can't execute PresidentialPardon");
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;   
}