/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:50:08 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:17 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point a, Point b, Point c, Point p);

int main()
{
	Point a(0, 4);
	Point b(4, 7);
	Point c(6, 1);
	Point p(3, 4);
	Point q(1, 1);
	Point r(2, 3);

	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, b, c, q) << std::endl;
	std::cout << bsp(a, b, c, a) << std::endl;
	std::cout << bsp(a, b, c, r) << std::endl;
}