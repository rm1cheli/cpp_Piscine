/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:04 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:05 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain{
	public:
		Brain();
		Brain(Brain &brain);
		~Brain();
		std::string *getIdeas();
		Brain	&operator=(const Brain &other);
	private:
		std::string *ideas;
};

#endif