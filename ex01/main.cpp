/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:30:10 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/27 21:01:33 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{

    ScavTrap s("hihi");
    s.attack("hamm");
    s.beRepaired(5);
    s.attack("hamm");
    s.takeDamage(50);
    s.takeDamage(60);
    s.guardGate();
    s.guardGate();
    return 0;
}