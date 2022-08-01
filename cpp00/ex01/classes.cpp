/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:30:45 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/13 12:30:55 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classes.hpp"

int PhoneBook::i = 0;
int PhoneBook::c = 0;
std::string PhoneBook::massage[5] = {"Enter your first name", "Enter your last name", "Enter your nickname", "Enter your phonenomber", "Enter your darkestsecret"};

void Contact::set(std::string date_firstname, std::string date_lastname, std::string date_nickname, std::string date_phonenomber, std::string date_darkestsecret){
	info[0] = date_firstname;
	info[1] = date_lastname;
	info[2] = date_nickname;
	info[3] = date_phonenomber;
	info[4] = date_darkestsecret;
}

std::string* Contact::get(){
	return info;
}

void PhoneBook::add_user(){
	if (i == 8)
		i = 0;
	while (c <= 4){
		std::cout << massage[c] << std::endl;
		std::cin >> str[c];
		c++;
	}
	contact[i].set(str[0], str[1], str[2], str[3], str[4]);
	i++;
	c = 0;
}
void PhoneBook::SearchContact(){
	int id;
	if (i == 0){
		std::cout << "\n\n\nNO CONTACTS\n\n" << std::endl;
		return;
	}
	std::cout << "        ID|First Name| Last Name|Nick Name |" << std::endl;
	for(int g = 0; g < i; g++){
		std::string *ct = contact[g].get();
		for(int j = 0; j < 4; j++){
			if (j != 0){
				for(int hj = 0; hj < 10 - (int)ct[j - 1].length(); hj++)
					std::cout << " ";
			}
			else
				std::cout << "         ";
			for(int size = 0; size < 10; size++){
				if(size == 9 && ct[j - 1].length() > 9 && j != 0){
					std::cout << ".";
					break;
				}
				else if(j == 0 && size == 0)
					std::cout << g + 1;
				else if(ct[j - 1][size] && j != 0)
					std::cout << ct[j - 1][size];
			}
			std::cout << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "Enter index contact" << std::endl;
	std::cin >> id;
	id--;
	std::string *ct = contact[id].get();
	if(std::cin.eof())
		return;
	if (id < 0 || id > 7 || ct[0].length() == 0){
		std::cout << "this contact does not exist" << std::endl;
		std::cin.clear();
		while (std::cin.get() != '\n');
		return;
	}
	for (int y = 0; y < 5; y++)
		std::cout << ct[y] << std::endl;
}
