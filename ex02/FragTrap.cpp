/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:33:04 by peli              #+#    #+#             */
/*   Updated: 2025/05/16 18:54:24 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " is created" << std::endl;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " is destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0) {
        Energy_points--;
        std::cout << "💣 FragTrap " << Name << " fiercely attacks " << target
                  << ", dealing " << Attack_damage << " damage!" << std::endl;
    } else {
        std::cout << "❌ FragTrap " << Name << " is too weak or out of energy to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "🖐️ FragTrap " << Name << " wants a high five! ✋" << std::endl;
}