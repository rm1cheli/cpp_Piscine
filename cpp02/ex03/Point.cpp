/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:50:11 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:14 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0){
}

Point::Point(Fixed const &fixed, Fixed const &fixed1) : x(fixed), y(fixed1){
}

Point::Point(Point const &point) : x(point.x), y(point.y){
}

Point::~Point(){
}

Fixed	Point::getX() const{
	return (this->x);
}
 
Fixed	Point::getY() const{
	return (this->y);
}