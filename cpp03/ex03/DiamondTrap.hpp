/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:42 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:19:51 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap :  public ScavTrap,  public FragTrap{

	private:
		std::string name;
	public:
		using FragTrap::hp;
		using ScavTrap::energy;
		using FragTrap::dmg;


		using ScavTrap::attack;
		DiamondTrap(const std::string &name);
		~DiamondTrap();
		void	whoAmI();

};

#endif