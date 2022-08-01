/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:33 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:34 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
class AMateria;
class Ice : public AMateria{
	public:
		Ice();
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif