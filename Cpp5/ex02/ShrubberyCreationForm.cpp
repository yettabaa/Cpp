/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:30:49 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 00:46:02 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default_Shrubbery", 145, 137), target("default") {} // the attribute of form is private so we initialized with Aform

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(target + "_Shrubbery", 145, 137), target(target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &overl)
{
	if (this != &overl)
		target = overl.target;
	return (*this);    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy.target + "_Shrubbery", 145, 137)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
        throw ThrowErros ("Form not signed");
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException ("the Bureaucrat can't execute ShrubberyCreationForm");
	std::ofstream outfile(target + "_shrubbery");
	if (!outfile.is_open())
        throw ThrowErros ("permission denied!");
	outfile << "                                                         .\n" 
			<< "                                              .         ;  \n" 
			<< "                 .              .              ;%     ;;\n" 
			<< "                   ,           ,                :;%  %; \n" 
			<< "                    :         ;                   :;%;'     .,   \n"
			<< "           ,.        %;     %;            ;        %;'    ,;\n" 
			<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
			<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
			<< "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
			<< "                `%;.     ;%;     %;'         `;%%;.%;'\n"
			<< "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
			<< "                    `:%;.  :;bd%;          %;@%;'\n"
			<< "                      `@%:.  :;%.         ;@@%;'   \n"
			<< "                        `@%.  `;@%.      ;@@%;         \n"
			<< "                          `@%%. `@%%    ;@@%;        \n"
			<< "                            ;@%. :@%%  %@@%;       \n"
			<< "                              %@bd%%%bd%%:;     \n"
			<< "                                #@%%%%%:;;\n"
			<< "                                %@@%%%::;\n"
			<< "                                %@@@%(o);  . '         \n"
			<< "                                %@@@o%;:(.,'         \n"
			<< "                            `.. %@@@o%::;         \n"
			<< "                               `)@@@o%::;         \n"
			<< "                                %@@(o)::;        \n"
			<< "                               .%@@@@%::;         \n"
			<< "                               ;%@@@@%::;.          \n"
			<< "                              ;%@@@@%%:;;;. \n"
			<< "                          ...;%@@@@@%%:;;;;,.." << std::endl;
}