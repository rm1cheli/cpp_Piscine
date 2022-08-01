/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:10 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 16:12:49 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const _name1, int _hp1, int _energy1, int _dmg1 ) : name(_name1), hp(_hp1), energy(_energy1), dmg(_dmg1)
{
	std::cout << "Hi, I am " << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hp(10), energy(10), dmg(0){
	this->name = name;
	std::cout << "Hi, I am " << name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout<< this->name << " destroyed\n";
}

void ClapTrap::attack(const std::string &target){
	if(this->energy != 0){
		std::cout << "ClapTrap " << this->name << " attacks "
		<< target << ", causing " << this->dmg << " points of damage\n";
		this->energy--;
	}
	else{
		std::cout << this->name << " not enough energy to attack\n";
	}
}

void ClapTrap::takeDamage(int amount){
	if(hp < 0){
		std::cout << this->name << " take " << amount << " damege "
		<< " he's already dead enough to mock the corpse!\n";
	}
	else if (this->hp <= amount){
		this->hp -= amount;
		std::cout << this->name << " takes " << amount << " damage and dies\n";
	}
	else{
		this->hp -= amount;
		std::cout << this->name << " take " << amount << " damege, "
		<< this->name << " has " << this->hp << " hp and " << this->energy << " energy left\n";
	}
}

void ClapTrap::beRepaired(int amount){
	if(this->hp <= 0)
		std::cout << this->name << "can't heal because he's dead\n";
	else if(this->energy == 0)
		std::cout << this->name << " not enough energy to recover\n";
	else{
		this->hp += amount;
		std::cout << this->name << " recovered " << amount << " hp,"
		<< this->name << " has " << this->hp << " hp and " << this->energy << " energy left\n";
	}
}