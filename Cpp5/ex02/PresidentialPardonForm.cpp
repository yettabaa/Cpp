/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:47:30 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/10 02:43:38 by yettabaa         ###   ########.fr       */
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
    {
        std::cerr << "PresidentialPardon is not signed" << std::endl;
        return ;
    }   
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException ("the Bureaucrat can't execute PresidentialPardon");
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;   
}