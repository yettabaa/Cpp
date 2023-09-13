/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 02:06:05 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 22:52:47 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::ThrowErros::ThrowErros(const char* message) : message(message) {}

const char* Intern::ThrowErros::what() const throw()
{
	return (message);
}

Intern::Intern() {}

Intern& Intern::operator=(const Intern& overl)
{
    (void)overl;
    return (*this);
}

Intern::Intern(const Intern& copy)
{
    *this = copy;
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
    int i = 0;
    std::string str[] = {"presidential pardon", "robotomy request", "shrubbery creation", ""};
    AForm* (Intern::*ptr[])(const std::string& target) = {&Intern::CreatePPF, &Intern::CreateRRF, &Intern::CreateSCF};
    while (!str[i].empty() && str[i] != name)
        i++;
    if (i == 3)
        throw ThrowErros ("Intern can't creates the target");
    std::cout << "Intern creates " << target << std::endl;
    return ((this->*ptr[i])(target));
}