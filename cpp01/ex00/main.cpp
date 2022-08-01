/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:18 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:35 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(){
	std::cout << "creat zombie" << std::endl;
	Zombie Gadji("Gadji");
	std::cout << Gadji.getName() << ": BraiiiiiiinnnzzzZ ..." << std::endl;
	std::cout << "Creating the new zombie" << std::endl;
	Zombie *Murad = newZombie("Murad");
	std::cout << Murad->getName() << ": BraiiiiiiinnnzzzZ ..." << std::endl;
	std::cout << "Creating the new zombie2" << std::endl;
	delete Murad;
	std::cout << "Creating the third zombie" << std::endl;
	randomChump("maga");
}