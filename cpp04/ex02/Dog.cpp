/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:08 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:09 by rmicheli         ###   ########.fr       */
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

Dog::Dog()
{
	this->type = "dog";
	std::cout << "I am an Dog" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog &dog){
	this->type = "dog";
	std::cout << "I am a copy of a dog" << std::endl;
	this->brain = dog.brain;
}

Dog::~Dog()
{
	std::cout << "I am no an Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
