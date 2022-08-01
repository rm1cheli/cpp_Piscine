/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:21 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 19:10:59 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
 
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
		ScavTrap tom("Thomas");
 
		tom.attack("Jack");
		tom.takeDamage(4);
		tom.beRepaired(1);
		tom.takeDamage(8);
		tom.takeDamage(1);
		tom.beRepaired(5);
		tom.guardGate();	
	}
	{
		ClapTrap *remi = new FragTrap("Joch");

		remi->attack("Remi");
		remi->takeDamage(4);
		remi->beRepaired(1);
		remi->takeDamage(8);
		remi->takeDamage(1);
		remi->beRepaired(5);
//		remi->highFivesGuys();
		delete (remi);
	}
}