/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:28 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:29 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
class AMateria;
class Cure : public AMateria{
	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif