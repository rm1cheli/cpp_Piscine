/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:30:50 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/13 12:30:54 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classes.hpp"
int main(){
	std::cout << "ADD for Add new Contact" << std::endl;
	std::cout << "SEARCH to llok for Contactr" << std::endl;
	std::cout << "EXIT for out of here" << std::endl;
	PhoneBook book;
	std::string command;
	while(1){
		std::cin >> command;
		if(command == "ADD")
			book.add_user();
		else if(command == "SEARCH")
			book.SearchContact();
		else if(command == "EXIT")
			return(0);
		if(std::cin.eof())
			return (0);
		std::cout << "---Enter Command---" << std::endl;
		std::cout << "ADD for Add new Contact" << std::endl;
		std::cout << "SEARCH to llok for Contactr" << std::endl;
		std::cout << "EXIT for out of here" << std::endl;
	}
	return(0);
} 