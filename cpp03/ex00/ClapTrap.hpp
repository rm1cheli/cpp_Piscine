/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:35:39 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 15:17:48 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int hp;
		int energy;
		int dmg;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string &target);
		void takeDamage(int amount);
		void beRepaired(int amount);
};

#endif