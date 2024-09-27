/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:30:16 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/27 20:48:36 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);

    ScavTrap(const ScavTrap &old);
    ScavTrap &operator=(const ScavTrap &old);

    void attack(const std::string &target);
    void guardGate();

    ~ScavTrap();
};

#endif