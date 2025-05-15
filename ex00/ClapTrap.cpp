/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:19:57 by peli              #+#    #+#             */
/*   Updated: 2025/05/15 16:11:12 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(const std::string& name) : Name(name)
{
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " can't attack" << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0)
    {
        Hit_points -= amount;
        std::cout << "ClapTrap " << Name << " lost " << amount << "points of damage!" << std::endl;
    }
    else
        std::cout << Name << " can't take damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points < 10)
    {
        Hit_points += amount;
        Energy_points--;
        std::cout << "ClapTrap " << Name << " regains " << amount << " hit point" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << "'s hit point already full" << std::endl;
}

// class ClapTrap {
// private:
//     std::string Name;        // Le nom du robot / Robot name / 机器人的名字
//     int Hit_points = 10;     // Points de vie / Health / 生命值
//     int Energy_points = 10;  // Points d'énergie / Energy / 能量值
//     int Attack_damage = 0;   // Dégâts / Damage / 攻击力
// };
