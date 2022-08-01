/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:00:01 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 14:00:08 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl{
	public:
		void complain(std::string level);
		void swithH(int i);
	private:
		int i;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif