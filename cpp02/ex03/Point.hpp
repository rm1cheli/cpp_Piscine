/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:50:13 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:14 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		~Point();
		Point(Fixed const &fixed, Fixed const &fixed1);
		Point(Point const &point);
		Point &operator=(const Point &point);
		Fixed getX() const;
		Fixed getY() const;
};

#endif