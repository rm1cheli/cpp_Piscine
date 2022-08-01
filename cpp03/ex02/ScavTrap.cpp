/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:28 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 16:07:07 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
 
ScavTrap::ScavTrap( std::string const name ) : ClapTrap(name, 100, 50, 20) {
	std::cout << "I am a ScavTrap" << std::endl;
}
 
ScavTrap::~ScavTrap(){
	std::cout << "End of ScavTrap" << std::endl;
	return;
}
 
void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode." << std::endl;
}
 
void	ScavTrap::attack(std::string const &target){
	if(this->energy != 0){
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
		this->energy--;
	}
	else{
		std::cout << this->name << " not enough energy to attack\n";
	}
}