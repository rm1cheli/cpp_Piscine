/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:31 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:32 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	protected:
		Brain *brain;
	public:
		Cat(void);
		Cat(Cat &src);
		~Cat(void);
		void makeSound(void) const;
		Cat	&operator=(const Cat &other);
		Cat(const Cat &src);
};

#endif