/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:49:51 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:33 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed){
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

Fixed::Fixed(int i){
	this->value = i << this->bits;
}

Fixed::Fixed(float i){
	std::cout << this->value << " float\n";
	int res = pow(2, this->bits);
	this->value = roundf(res * i);
}

float Fixed::toFloat(void) const{
	int res = pow(2, this->bits);
	return ((float)this->value / res);
}

int Fixed::toInt(void) const{
	return (this->value >> this->bits);
}

std::ostream& operator<<(std::ostream &str, const Fixed &fixed){
	str << fixed.toFloat();
	return (str); 
}
