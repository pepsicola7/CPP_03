/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:19:54 by peli              #+#    #+#             */
/*   Updated: 2025/05/15 14:58:56 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class ClapTrap
{
private:
    std::string Name;
    int         Hit_points = 10;
    int         Energy_points = 10;
    int         Attack_damage = 10;
public:
    ClapTrap(const std::string& name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap(const std::string& name)
{
    Name = name;
}

ClapTrap::~ClapTrap()
{
}
