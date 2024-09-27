/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:30:13 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/27 21:11:40 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap class: Default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap class: string constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &old)
{
    std::cout << "ScavTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &old)
{
    std::cout << "ScavTrap class: Copy assignment operator called" << std::endl;
    _name = old._name;
    _hitPoints = old._hitPoints;
    _energyPoints = old._energyPoints;
    _attackDamage = old._attackDamage;
    return (*this);
};

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
        std::cout << "ScavTrap " << _name << " died!\n";
    else if (_attackDamage > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
        _energyPoints--;
    }
    else
        std::cout << "ScavTrap " << _name << " can't do anything, he has zero energy points\n";
};

void ScavTrap::guardGate()
{
    if (_hitPoints <= 0)
        std::cout << "ScavTrap " << _name << " died!\n";
    else
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap class Destructor called" << std::endl;
};