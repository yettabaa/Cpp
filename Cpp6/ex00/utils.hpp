/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:47:45 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/15 01:20:55 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#define FLOAT 0
#define DOUBLE 1
#define INT 2

int countCharacter(const std::string& str, char target);
int checkFloat(const std::string& str, int flag);
int Checksign(const std::string& str, int flag);

#endif