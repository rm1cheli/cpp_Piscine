/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:35:43 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/22 12:35:53 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(){
	ClapTrap remi("Remi");

	remi.attack("Bob");
	remi.takeDamage(4);
	remi.beRepaired(1);
	remi.takeDamage(8);
	remi.takeDamage(1);
	remi.beRepaired(5);
}