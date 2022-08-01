/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:28 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:32 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string nameZombie){
	this->name = nameZombie;
}

Zombie::~Zombie(){
	std::cout << this->name << " dead" << std::endl;
}

std::string Zombie::getName(){
	return this->name;
}