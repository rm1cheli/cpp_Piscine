/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:48 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:49 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	*this = src;
	return;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Assignement operator for WrongCat called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

std::ostream	&operator<<( std::ostream &ostream, const WrongCat &instance )
{
	ostream << instance.getType();;
	return ostream;
}

WrongCat::WrongCat()
{
	this->type = "wrongcat";
	std::cout << "I am an WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "I am no an WrongCat" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}
