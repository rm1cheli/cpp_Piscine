/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:54 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:36:40 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string const name ) : ClapTrap(name, 0, 0, 0) {
	this->hp = 600;
	this->energy = 600;
	std::cout << "I am a ScavTrap" << std::endl;
}
 
ScavTrap::~ScavTrap(){
	std::cout << "End of ScavTrap " << this->name << std::endl;
	return;
}
 
void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode." << std::endl;
}
 
void	ScavTrap::dmg123(std::string const &target){
	if(this->energy != 0){
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
		this->energy--;
	}
	else{
		std::cout << this->name << " not enough energy to attack\n";
	}
}