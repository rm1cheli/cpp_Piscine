/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:03 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:04 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++){
		this->ideas[i] = rhs.ideas[i];
	}
	std::cout << "a copy of the brain is created";
	return *this;
}

Brain::Brain(){
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++){
		this->ideas[i] = "I want to sleep";
	}
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain &brain){
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++){
		this->ideas[i] = brain.ideas[i];
	}
	std::cout << "a copy of the brain is created\n";
}

std::string *Brain::getIdeas(){
	return this->ideas;
}