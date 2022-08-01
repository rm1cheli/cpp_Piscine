/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:35:59 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 16:01:25 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
 
int main()
{
	{
		ClapTrap remi("Remi");
 
		remi.attack("Bob");
		remi.takeDamage(4);
		remi.beRepaired(1);
		remi.takeDamage(8);
		remi.takeDamage(1);
		remi.beRepaired(5);
	}
	{
		ScavTrap *tom = new ScavTrap("Thomas");
 
		tom->attack("Jack");
		tom->takeDamage(4);
		tom->beRepaired(1);
		tom->takeDamage(8);
		tom->takeDamage(1);
		tom->beRepaired(5);
		tom->guardGate();
		delete (tom);
	}
}