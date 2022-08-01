/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:28 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:29 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	protected:
		Brain *brain;
	public:
		Dog(void);
		Dog(Dog &dog);
		~Dog(void);
		void makeSound(void) const;
		Dog	&operator=(const Dog &other);
		Dog(const Dog &src);
};

std::ostream	&operator<<( std::ostream &ostream, const Dog &instance );

#endif