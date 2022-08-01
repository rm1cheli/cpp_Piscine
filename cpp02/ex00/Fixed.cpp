/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:49:36 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:52:05 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
	this->value = 0;
}

Fixed::Fixed(Fixed &fixed){
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator=(Fixed &fixed){
	std::cout << "Copy assignment operator called\n";

	if (this != &fixed){
		this->value = fixed.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return this->value;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}
