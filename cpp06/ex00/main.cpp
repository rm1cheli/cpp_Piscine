/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:04:59 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/30 17:05:00 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
 
int main(int ac, char **av)
{
	if (ac >= 2)
	{
		Convert	nb(av[1]);
 
		std::cout << "char: ";
		if (nb.getIsChar())
			std::cout << nb.getChar() << std::endl;
		else if (!nb.getIsInt())
			std::cout << "impossible" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << "int: ";
		if (nb.getIsInt())
			std::cout << nb.getInt() << std::endl;
		else
			std::cout << "impossible" << std::endl;
		std::cout << "float: ";
		nb.printFloat();
		std::cout << "double: ";
		nb.printDouble();
	}
}