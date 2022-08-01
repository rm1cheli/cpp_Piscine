/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:45 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:36:33 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string const name) : ClapTrap(name, 500, 500, 500){
	this->hp = 200;
	this->energy = 200;
	std::cout << "FragTrap created by name " << name << "\n";
}

FragTrap::~FragTrap(){
	std::cout << "End of FragTrap " << this->name << "\n";
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->name << " request a high five." << std::endl;
}

void FragTrap::attack(std::string const &target){
	if(this->energy != 0){
		std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
		this->energy--;
	}
	else{
		std::cout << this->name << " not enough energy to attack\n";
	}
}
