/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:54 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:55 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_C
#define ZOMBIE_C

class Zombie {
public:
	Zombie();
	~Zombie();

	void Zombie_spik();
	std::string getName(void);
	bool setName(std::string newName);
private:
	std::string name;
};

Zombie *zombieHorde(int numberOfZombies, std::string name);
#endif