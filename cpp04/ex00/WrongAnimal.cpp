/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:50 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:51 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.getType();;
	return ostream;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "I am an WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "I am no an WrongAnimal" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}