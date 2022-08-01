/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:30 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:31 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
#define ZOMBIES_HPP
#include <iostream>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie(void);
		std::string getName();
	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif