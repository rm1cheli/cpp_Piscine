/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:19 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:20 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
	protected:
		std::string type;
		AMateria();
	public:
		AMateria(std::string const & type);
		~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		AMateria	&operator=(const AMateria &other);
};

#endif