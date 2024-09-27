/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:09:47 by khalid            #+#    #+#             */
/*   Updated: 2024/09/26 23:10:33 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " can't attack. No energy or hit points left!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= amount) {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage and is destroyed!" << std::endl;
    } else {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage. " << _hitPoints << " hit points remaining." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints == 0) {
        std::cout << "ClapTrap " << _name << " can't be repaired. No energy points left!" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points. Now has " << _hitPoints << " hit points." << std::endl;
}