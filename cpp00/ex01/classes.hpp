/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:30:48 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/13 12:30:54 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP
#include <iostream>

class Contact{

	private:
		std::string info[5];
	public:
		void set(std::string date_firstname, std::string date_lastname, std::string date_nickname, std::string date_phonenomber, std::string date_darkestsecret);
		std::string* get();
};

class PhoneBook{
	private:
		std::string str[5];
		static std::string massage[5];
		Contact contact[8];
		static int i;
		static int c;
	public:
		void add_user(void);
		void SearchContact(void);
};
#endif