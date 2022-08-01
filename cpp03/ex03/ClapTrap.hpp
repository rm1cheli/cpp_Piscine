/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:39 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:20:47 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		int hp;
		int energy;
		int dmg;
	public:
		ClapTrap( std::string const _name1, int _hp1, int _energy1, int _dmg1);
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		virtual void attack(const std::string &target);
		void takeDamage(int amount);
		void beRepaired(int amount);
};

#endif