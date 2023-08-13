/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:39:49 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/13 23:48:54 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iomanip>
#include <iostream>

class Brain
{
public:
    std::string ideas[100];
    // std::string *ideas;
    Brain();
    Brain(const std::string &name);
    Brain& operator=(const Brain &overl);
    Brain(const Brain& copy);
    ~Brain();
};

#endif