/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:26 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:56:32 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name){
	Zombie zombie = Zombie(name);
	std::cout << name << ": BraiiiiiiinnnzzzZ ..." << std::endl;
}