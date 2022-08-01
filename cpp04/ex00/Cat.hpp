/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:56 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:57 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat(void);
		~Cat(void);
		void makeSound(void) const;
		Cat	&operator=(const Cat &other);
		Cat(const Cat &src);
};

std::ostream	&operator<<( std::ostream &ostream, const Cat &instance );

#endif