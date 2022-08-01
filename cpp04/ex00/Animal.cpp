/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:21:00 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:21:01 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance )
{
	ostream << instance.getType();;
	return ostream;
}

Animal::Animal()
{
	std::cout << "I am an animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "I am no an animal" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}