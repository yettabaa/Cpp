/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:54:36 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 10:03:34 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "PhoneBook.hpp"

#define TRUE 1
#define FALSE 0
#define NOTDIGIT 2

std::string _check(int field, int *flag);
std::string trim(std::string str, std::string str1);

#endif