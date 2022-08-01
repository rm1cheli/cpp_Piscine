/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:10 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:57:11 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
	private:
		std::string name;
		Weapon *weapon;
	public:
		void attack();
		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon &weapon);
};

#endif