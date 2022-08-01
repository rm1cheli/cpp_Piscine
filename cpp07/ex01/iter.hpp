/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:42:20 by rmicheli          #+#    #+#             */
/*   Updated: 2022/07/02 11:42:21 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename T >
void	iter(T * array, int lenght, void f(T const & e))
{
	for (int i = 0; i < lenght; i++)
	{
		f(array[i]);
	}
}

#endif