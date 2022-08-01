/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:50:07 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:18 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
 
class Fixed{
 
	private:
		int value;
		static const int number;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int i);
		Fixed(float i);
 
		~Fixed();
		Fixed &operator=(const Fixed &fixed);
		int		toInt(void) const;
		float	toFloat(void) const;
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		bool	operator>( const Fixed &rhs ) const;
		bool	operator<( const Fixed &rhs ) const;
		bool	operator>=( const Fixed &rhs ) const;
		bool	operator<=( const Fixed &rhs ) const;
		bool	operator==( const Fixed &rhs ) const;
		bool	operator!=( const Fixed &rhs ) const;
		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;
		Fixed	&operator++();
		Fixed	&operator++(int);
		Fixed	&operator--();
		Fixed	&operator--(int);
		static	Fixed &max(Fixed &p1, Fixed &p2);
		static const	Fixed &max(const Fixed &p1, const Fixed &p2);
		static	Fixed &min(Fixed &p1, Fixed &p2);
		static const	Fixed &min(const Fixed &p1, const Fixed &p2);
 
};
	std::ostream &	operator<<( std::ostream &ostr, Fixed const & instance);
#endif