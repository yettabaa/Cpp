/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 02:06:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/12 02:52:02 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
private:

public:
    Intern();
    Intern& operator=(const Intern& overl);
    Intern(const Intern& copy);
    ~Intern();
    AForm* CreatePPF(const std::string& target);
    AForm* CreateRRF(const std::string& target);
    AForm* CreateSCF(const std::string& target);
    AForm* makeForm(const std::string& name, const std::string& target);
};

#endif