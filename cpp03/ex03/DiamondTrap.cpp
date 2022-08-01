/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:41 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:31:13 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name", 90, 50, 30), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dmg = FragTrap::dmg;
	std::cout << "I am " << this->name << ", a DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "End of DiamondTrap " << this->name << std::endl;
	return;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, I am " << this->ClapTrap::name << " but you can call me " << this->name << ". HP = " << this->hp  << std::endl;
}