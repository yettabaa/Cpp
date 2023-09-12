/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 02:06:05 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 02:54:38 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern& Intern::operator=(const Intern& overl)
{
    
}

Intern::Intern(const Intern& copy)
{
    
}

Intern::~Intern() {}

AForm* Intern::CreatePPF(const std::string& target)
{
    return (new PresidentialPardonForm (target));
}

AForm* Intern::CreateRRF(const std::string& target)
{
    return (new RobotomyRequestForm (target));
}

AForm* Intern::CreateSCF(const std::string& target)
{
    return (new ShrubberyCreationForm (target));
}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
    AForm* (Intern::*ptr[])(const std::string& target) = {&Intern::CreatePPF, &Intern::CreateRRF, &Intern::CreateSCF};
}