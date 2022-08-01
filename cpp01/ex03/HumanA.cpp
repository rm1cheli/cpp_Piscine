/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:08 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:57:09 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name){
	this->weapon = &weapon;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon->GetType() << std::endl;
}