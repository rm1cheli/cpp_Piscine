/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:35:48 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 16:01:53 by rmicheli         ###   ########.fr       */
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