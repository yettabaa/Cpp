/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:30:49 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/10 02:17:31 by yettabaa         ###   ########.fr       */
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
    {
        std::cerr << "ShrubberyCreationForm is not signed" << std::endl;
        return ;
    }   
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException ("the Bureaucrat can't execute ShrubberyCreationForm");
    std::ofstream outfile(target + "_shrubbery");
    if (!outfile.is_open())
    {
        std::cerr << "permission denied!" << std::endl;
        return;
    }
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