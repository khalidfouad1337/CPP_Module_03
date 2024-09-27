/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:09:56 by khalid            #+#    #+#             */
/*   Updated: 2024/09/26 23:10:58 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("CT-001");
    
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Enemy");
    clap.takeDamage(10);
    clap.beRepaired(5);
    
    return 0;
}