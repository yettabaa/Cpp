/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:55:04 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/05 18:31:29 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

bool ErrorHandler(std::string str);
std::time_t DateToSeconds(const std::string& str);
double findValue(std::map<std::time_t, double> &dataBase, std::time_t key);
int countCharacter(const std::string& str, char target) ;
bool isValidDate(const std::string &str) ;

#endif