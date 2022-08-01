/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:29 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:57:30 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{
	private:
		std::string type;
	public:
		std::string GetType();
		void setType(std::string type);
		Weapon();
		Weapon(std::string name);
		~Weapon();
};

#endif