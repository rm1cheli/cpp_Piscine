/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:42:18 by rmicheli          #+#    #+#             */
/*   Updated: 2022/07/02 11:42:19 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	aff_nb(int const & nb)
{
	std::cout << "the number is " << nb << std::endl;
}

void	aff_fnb(float const & nb)
{
	std::cout << "the float is " << nb << std::endl;
}


int main()
{
	int nb[] = {1, 2, 3, 4, 5};

	float fnb[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter<int>(nb, 5, aff_nb);
	iter<float>(fnb, 5, aff_fnb);
}