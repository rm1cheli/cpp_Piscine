/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:25 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:26 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
class AMateria;
class ICharacter;

class Character : public ICharacter{

	private:
		AMateria *(inv[4]);
		std::string const name;
	public:
		Character(std::string const name);
		Character(Character &cp);
		~Character();
		std::string const &	getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria *getInv(int idx); 
};

#endif