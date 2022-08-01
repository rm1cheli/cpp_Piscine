/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:13 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:57:13 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name){
	this->weapon = NULL;
}

HumanB::~HumanB(){
}

void HumanB::attack(){
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->GetType() << std::endl;
	else
		std::cout << this->name << " unarmed and cannot attack\n";
}

void HumanB::setWeapon(Weapon &type){
	this->weapon = &type;
}