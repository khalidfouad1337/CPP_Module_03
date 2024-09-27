/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:09:56 by khalid            #+#    #+#             */
/*   Updated: 2024/09/27 19:36:21 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("CT-001");
    
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Enemy");
    clap.takeDamage(10);
    clap.beRepaired(5);
    
    return 0;
}