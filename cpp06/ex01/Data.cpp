/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:05:02 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/30 17:43:36 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "Data.hpp"

Data::Data(std::string const &str) : _ser(str){
}

Data::Data() : _ser(""){
}

Data::Data(Data &c){
	*this = c;
}

Data &Data::operator=(const Data &other){
	this->_ser = other.getSer();
	return *this;
}

Data::~Data(){
	return;
}


std::string Data::getSer() const{
	return(this->_ser);
}