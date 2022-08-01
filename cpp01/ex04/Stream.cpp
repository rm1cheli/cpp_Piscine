/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:58:10 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:58:15 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <fstream>
#include "Stream.hpp"

Stream::Stream(std::string name){
	std::string newFile = name + ".reaplace";
	this->file.open(name);
	if(this->file.is_open()){
		this->newFile.open(newFile);
	} else {
		std::cout << "Error file " << name << std::endl;
	}
}

Stream::~Stream(){
	this->newFile.close();
	this->file.close();
}

void Stream::inread(std::string &dest){
	if(this->file.is_open()){
		std::string line;
		while (std::getline(this->file, line)){
			dest.append(line);
			if (!this->file.eof())
				dest.append("\n");
		}
	}
}

void Stream::outwrite(std::string &str){
	if(this->newFile.is_open())
		this->newFile << str;
}

int Stream::replace(std::string s1, std::string s2){
	int i = 0;
	int c = 0;
	std::string read;
	std::string write;
	inread(read);
	if(s1 == s2)
		write = read;
	else{
		while(true){
			c = read.find(s1, i);
			if(c == (int)std::string::npos){
				write.append(read, i, read.length());
				break;
			}
			write.append(read, i, c - i);
			write.append(s2);
			i = c + s1.length();
		}
	}
	outwrite(write);
	return(1);
}
