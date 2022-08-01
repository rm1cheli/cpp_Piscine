/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:50:03 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:21 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Fixed formula (Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
	- (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}
 
bool	bsp(Point a, Point b, Point c, Point p)
{
	Fixed d1, d2, d3;
	bool x1, x2;
 
	d1 = formula(p, c, a);
	d2 = formula(p, a, b);
	d3 = formula(p, b, c);
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (0);
	x1 = (d1 < 0) || (d2 < 0) || (d3 < 0);
	x2 = (d1 > 0) || (d2 > 0) || (d3 > 0);
 
	return !(x1 && x2);
}