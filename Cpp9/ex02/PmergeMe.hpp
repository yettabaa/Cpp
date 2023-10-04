/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:55 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/03 22:15:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
//when you subtract the iterator the operator - give you the number of element / how that the substraction substract the adress and divis the resulte by sizeof(type)
#include <iostream>
#include <vector>
typedef std::vector<std::string> string;
typedef std::vector<int> v_int;

v_int parsing(char **av, int ac);
v_int sort(const v_int& array);

#endif