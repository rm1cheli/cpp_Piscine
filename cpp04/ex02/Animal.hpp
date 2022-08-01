/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:01 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:03 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
	protected:
		Animal(void);
		std::string type;
	public:
		virtual ~Animal(void);
		virtual void makeSound() const = 0;
		std::string		getType( void ) const;
		Animal	&operator=(const Animal &other);
		Animal(const Animal &src);
};

#endif
