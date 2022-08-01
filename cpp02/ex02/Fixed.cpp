/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:49:58 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:26 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>
 
Fixed::Fixed(){
	this->value = 0;
}
 
Fixed::Fixed(const Fixed &fixed){
	*this = fixed;
}
 
Fixed::Fixed(int i){
	this->value = i << this->bits;
	return;
}
 
Fixed::Fixed(float i){
	int power = pow(2, this->bits);
	this->value = roundf(i * power);
	return;
}
 
Fixed::~Fixed(){
	this->value = 0;
}
 
Fixed& Fixed::operator=(const Fixed &fixed){
 
	if (this != &fixed){
		this->value = fixed.getRawBits();
	}
	return (*this);
}
 
std::ostream &	operator<<(std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}
 
int Fixed::getRawBits() const{
	return this->value;
}
 
void Fixed::setRawBits(int const raw){
	this->value = raw;
}
 
int Fixed::toInt()const{
	return(this->value >> this->bits);
}
 
float Fixed::toFloat()const{
	int power = pow(2, this->bits);
	float res = (float)this->value / power;
	return (res);
}
 
bool	Fixed::operator>( const Fixed &rhs ) const{
	return (this->getRawBits() > rhs.getRawBits());
}
 
bool	Fixed::operator<( const Fixed &rhs ) const{
	return (this->getRawBits() < rhs.getRawBits());
}
 
bool	Fixed::operator>=( const Fixed &rhs ) const{
	return (this->getRawBits() >= rhs.getRawBits());
}
 
bool	Fixed::operator<=( const Fixed &rhs ) const{
	return (this->getRawBits() <= rhs.getRawBits());
}
 
bool	Fixed::operator==( const Fixed &rhs ) const{
	return (rhs.getRawBits() == this->getRawBits());
}
 
bool	Fixed::operator!=( const Fixed &rhs ) const{
	return (rhs.getRawBits() != this->getRawBits());
}
 
Fixed	Fixed::operator+( const Fixed &rhs ) const{
	Fixed	res;
 
	Fixed	result(this->toFloat() + rhs.toFloat());
	return (result);
}
 
Fixed	Fixed::operator-( const Fixed &rhs ) const{
	Fixed	res;
 
	Fixed	result(this->toFloat() - rhs.toFloat());
	return (result);
}
 
Fixed	Fixed::operator*( const Fixed &rhs ) const{
	Fixed	res;
 
	Fixed	result(this->toFloat() * rhs.toFloat());
	return (result);
}
 
Fixed	Fixed::operator/( const Fixed &rhs ) const{
	Fixed	res;
 
	Fixed	result(this->toFloat() / rhs.toFloat());
	return (result);
}
 
Fixed	&Fixed::operator++(){
	this->value = (this->toInt() + 1) << this->bits;
	return *this;
}
 
Fixed	&Fixed::operator++(int){
	Fixed	&old(*this);
 
	++(*this);
	return old;
}
 
Fixed	&Fixed::operator--(){
	this->value = (this->toInt() - 1) << this->bits;
	return *this;
}
 
Fixed	&Fixed::operator--(int){
	Fixed	&old(*this);
 
	--(*this);
	return old;
}
 
Fixed	&Fixed::max(Fixed &p1, Fixed &p2){
	if (p1 > p2)
		return p1;
	return p2;
}
 
const Fixed	&Fixed::max(const Fixed &p1, const Fixed &p2){
	if (p1 > p2)
		return p1;
	return p2;
}
 
Fixed	&Fixed::min(Fixed &p1, Fixed &p2){
	if (p1 > p2)
		return p2;
	return p1;
}
 
const Fixed	&Fixed::min(const Fixed &p1, const Fixed &p2){
	if (p1 > p2)
		return p2;
	return p1;
}