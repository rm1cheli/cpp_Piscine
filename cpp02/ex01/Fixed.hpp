/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:49:54 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:31 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed(int i);
		Fixed(float i);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator=(const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &str, const Fixed &fixed);

#endif