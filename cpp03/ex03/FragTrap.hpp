/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:36:47 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 18:23:56 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include "iostream"

class FragTrap : virtual public ClapTrap{
	protected:
		FragTrap(void);

	public:
		FragTrap(std::string const name);
		~FragTrap();
 
		void	highFivesGuys(void);
		void	attack(std::string const &target);
};

#endif