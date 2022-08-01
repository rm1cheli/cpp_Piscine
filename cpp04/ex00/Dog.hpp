/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:54 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:55 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		~Dog(void);
		void makeSound(void) const;
		Dog	&operator=(const Dog &other);
		Dog(const Dog &src);
};

std::ostream	&operator<<( std::ostream &ostream, const Dog &instance );

#endif