/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:15 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:17 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
class ICharacter;

AMateria::AMateria(){
	this->type = "";
}

AMateria::AMateria(std::string const &type){
	this->type = type;
}

AMateria::~AMateria(){}

std::string const &AMateria::getType() const {
	return this->type;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	this->type = rhs.getType();
	return *this;
}
