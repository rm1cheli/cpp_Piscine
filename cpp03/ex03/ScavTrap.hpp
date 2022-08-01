/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:56 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:32:36 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
 
class	ScavTrap : virtual public ClapTrap{
protected:
	ScavTrap(void);
 
public:
	ScavTrap(std::string const name);
	~ScavTrap();
 
	void	guardGate();
	void	dmg123(std::string const &target);
};
 
#endif