/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:45 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:46 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(){
	std::cout << "Creating the first Zombie horde of Roberts" << std::endl;
	Zombie *zom = zombieHorde(4, "Roberts");
	for (int i = 0; i < 4; i++)
		zom[i].Zombie_spik();
	delete [] zom;
}