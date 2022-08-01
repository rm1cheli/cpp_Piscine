/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:58 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:59 by rmicheli         ###   ########.fr       */
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

std::ostream	&operator<<( std::ostream &ostream, const Cat &instance )
{
	ostream << instance.getType();;
	return ostream;
}

Cat::Cat()
{
	this->type = "cat";
	std::cout << "I am an cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "I am no an cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
