/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:19:50 by peli              #+#    #+#             */
/*   Updated: 2025/05/16 15:28:46 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap war("A");
    war.attack("B");
    war.takeDamage(3);
    war.beRepaired(5);
    war.attack("C");
    war.takeDamage(15);
    war.beRepaired(2);
    return (0);
}