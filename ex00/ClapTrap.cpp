/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:19:57 by peli              #+#    #+#             */
/*   Updated: 2025/05/15 15:48:49 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "ClapTrap" << name << "is created" << std::endl;
    Name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << Name << "is destroied" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap" << Name << "attack" << target << std::endl;
    }
    else
        std::cout << "ClapTrap" << Name << "can't attack" << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points < 10)
    {
        Hit_points++;
        std::cout << "ClapTrap" << Name << "regains 1 hit point" << std::endl;
    }
    else
        std::cout << "ClapTrap" << Name << "'s hit point already full" << std::endl;
}