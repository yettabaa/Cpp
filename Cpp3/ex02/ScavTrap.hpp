/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:25:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/10 21:41:53 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
//only non-inherited variables can be initialized in the member initializer list
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap (const std::string &name);
    ScavTrap &operator=(const ScavTrap &overl);
    ScavTrap (const ScavTrap &copy);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif