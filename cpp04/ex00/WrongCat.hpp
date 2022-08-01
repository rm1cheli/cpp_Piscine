/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:47 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:48 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		~WrongCat(void);
		void makeSound(void) const;
		WrongCat	&operator=(const WrongCat &other);
		WrongCat(const WrongCat &src);
};

std::ostream	&operator<<( std::ostream &ostream, const WrongCat &instance );

#endif