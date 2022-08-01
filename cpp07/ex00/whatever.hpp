/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:42:22 by rmicheli          #+#    #+#             */
/*   Updated: 2022/07/02 11:42:23 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void	swap(T & a, T & b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T	min(T a, T b)
{
	return(a < b ? a : b);
}

template < typename T >
T	max(T a, T b)
{
	return(a > b ? a : b);
}

#endif