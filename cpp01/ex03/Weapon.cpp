/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:26 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:57:27 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

std::string Weapon::GetType(){
	return this->type;
}

void Weapon::setType(std::string type){
	this->type = type;
}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::Weapon(){
}

Weapon::~Weapon(){}