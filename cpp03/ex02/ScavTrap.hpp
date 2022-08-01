/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:31 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 12:36:32 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
 
class	ScavTrap : public ClapTrap{
private:
 
public:
	ScavTrap(std::string const name);
	~ScavTrap();
 
	void	guardGate();
	void	attack(std::string const &target);
};
 
#endif