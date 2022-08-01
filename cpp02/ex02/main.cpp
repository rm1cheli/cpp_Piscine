/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:50:01 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:23 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a.toInt() << std::endl;
	++a;
	std::cout << a.toInt() << std::endl;
	--a;
	std::cout << a.toInt() << std::endl;
	a++;
	std::cout << a.toInt() << std::endl;
	a--;
	std::cout << a.toInt() << std::endl;
	a++;
	a++;
	std::cout << b << " = b" << std::endl;
	std::cout << a << " = a" << std::endl;
	std::cout << b / a << " = b / a"  << std::endl;
	std::cout << b + a << " = b + a"  << std::endl;
	std::cout << b - a << " = b - a"  << std::endl;
	if (b < a)
		std::cout << "b < a(1)" << std::endl;
	else
		std::cout << "b > a(1)" << std::endl;

	if (b > a)
		std::cout << "b > a(2)" << std::endl;
	else
		std::cout << "b < a(2)" << std::endl;
	if (b <= a)
		std::cout << "b <= a(1)" << std::endl;
	else
		std::cout << "b >= a(1)" << std::endl;

	if (b > a)
		std::cout << "b >= a(2)" << std::endl;
	else
		std::cout << "b <= a(2)" << std::endl;
	if (b == a)
		std::cout << "b == a(1)" << std::endl;
	else
		std::cout << "b != a(1)" << std::endl;
	if (b != a)
		std::cout << "b != a(2)" << std::endl;
	else
		std::cout << "b == a(2)" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}