/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:05 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:06 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = src;
	return;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

Cat::Cat()
{
	this->type = "cat";
	std::cout << "I am an cat" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat &cat){
	this->type = "cat";
	std::cout << "I am a copy of a cat" << std::endl;
	this->brain = cat.brain;
}

Cat::~Cat()
{
	std::cout << "I am no an cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
