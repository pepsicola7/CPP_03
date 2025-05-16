/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:33:20 by peli              #+#    #+#             */
/*   Updated: 2025/05/16 18:52:24 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
    FragTrap(const std::string& name);
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys(void);
};