/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:58 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:58 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int numberOfZombies, std::string name){
	Zombie *zombieHorde = new Zombie[numberOfZombies];

	for (int i = 0; i < numberOfZombies; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}