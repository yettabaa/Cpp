/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:58:11 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/10 02:48:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    // custom class is created which inherits all properties from the std::exception class
    class GradeTooHighException : public std::exception // Nested Classes/custom class
    {
    private:    
        const char* message;
        virtual const char* what() const throw();
    public:    
        GradeTooHighException(const char* message);
    };
    class GradeTooLowException : public std::exception // Nested Classes/custom class
    {
    private:
        const char* message;
        virtual const char* what() const throw();
    public:    
        GradeTooLowException(const char* message);
    };
    Bureaucrat();
    Bureaucrat(const std::string& name, const int& grade);
    Bureaucrat& operator=(const Bureaucrat& overl);
    Bureaucrat(const Bureaucrat& copy);
    ~Bureaucrat();
    const std::string& getName() const;
    const int& getGrade() const;
    void increment_grade();
    void decrement_grade();
    void signForm(const AForm& form);
    void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& over);

#endif