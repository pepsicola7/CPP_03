/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:19:50 by peli              #+#    #+#             */
/*   Updated: 2025/05/16 18:28:30 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Guardian");
    scav.attack("Bandit");

    ClapTrap* trap = new ScavTrap("VirtualTest");
    trap->attack("Bandit");

    return 0;
}