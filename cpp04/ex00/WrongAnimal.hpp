/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:48 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:49 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		void makeSound( void ) const;
		std::string	 getType( void ) const;
		WrongAnimal	&operator=(const WrongAnimal &other);
		WrongAnimal(const WrongAnimal &src);
};

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance );

#endif