/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:55 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:56 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Assignement operator for Dog called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

std::ostream	&operator<<( std::ostream &ostream, const Dog &instance )
{
	ostream << instance.getType();;
	return ostream;
}

Dog::Dog()
{
	this->type = "dog";
	std::cout << "I am an Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "I am no an Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
