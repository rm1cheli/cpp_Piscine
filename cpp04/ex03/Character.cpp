/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:22 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:23 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(std::string const name) : name(name){
	for(int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	std::cout << "Character " << name << " created\n";
}

Character::Character(Character &cp) : name(cp.getName())
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = cp.getInv(i);
	std::cout << "Character " << cp.getName() << " created\n";
}

Character::~Character(){}

std::string const & Character::getName() const{
	return (this->name);
}

void Character::equip(AMateria* m){
	int i = 0;
	while(this->inv[i] != NULL && i < 4)
		i++;
	if (i < 4)
		this->inv[i] = m;
}

void Character::unequip(int idx){
	this->inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
	if (this->inv[idx])
		this->inv[idx]->use(target);
}

AMateria *Character::getInv(int idx){
	if (idx >= 0 && idx <= 4)
		return(this->inv[idx]);
	return (NULL);
}