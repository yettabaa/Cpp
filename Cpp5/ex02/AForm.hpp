/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:38:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/08 23:01:13 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool IsSigned;
	const int GradeToSign;
	const int GradeToExecute;
public:
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
	AForm();
	AForm(const std::string& name, const int& GradeToSign, const int& GradeToExecute);
	AForm& operator=(const AForm& overl);
	AForm(const AForm& copy);
	virtual ~AForm();
	const std::string& getName() const;
	const bool& getIsSigned() const;
	const int& getGradeToSign() const;
	const int& getGradeToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& over);

#endif