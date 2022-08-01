/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:59:58 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 14:01:42 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

enum TPP{DEBUG, INFO, WARNING, ERROR}; 

void Harl::debug(){
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(){
	std::cout<< "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level){
	void (Harl::*foopointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
	int i = this->i;
	while (i < 4){
		if(level == levels[i])
			(this->*foopointer[i])();
		i++;
	}
}

void Harl::swithH(int level){
	switch (level)
	{
	case DEBUG:
		this->i = 0;
		break;
	case INFO:
		this->i = 1;
		break;
	case WARNING:
		this->i = 2;
		break;
	case ERROR:
		this->i = 3;
		break;
	default:
		break;
	}
}