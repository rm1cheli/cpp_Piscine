/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:59 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:21:00 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal( void );
		virtual ~Animal( void );
		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
		Animal	&operator=(const Animal &other);
		Animal(const Animal &src);
};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif
