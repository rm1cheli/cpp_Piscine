/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:16 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:57:18 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		void attack();
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &type);
};

#endif