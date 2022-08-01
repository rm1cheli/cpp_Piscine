/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:31 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 16:10:44 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat &bur) : name(bur.getName()), rang(bur.getRang()){
	return;
}

Bureaucrat::Bureaucrat() : name(""), rang(150){}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other){
	this->rang = other.getRang();
	std::cout << name << " copied\n";
	return *this;
}

Bureaucrat::Bureaucrat(std::string const name, int rang) : name(name){
	if(rang > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if(rang < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->rang = rang;
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::increaseRank(void){
	this->rang--;
	if(this->rang < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::downGrade(void){
	this->rang++;
	if(this->rang > 150)
		throw (Bureaucrat::GradeTooLowException());
}

std::string Bureaucrat::getName(void) const{
	return this->name;
}

int Bureaucrat::getRang(void) const{
	return this->rang;
}

std::ostream &operator<<(std::ostream &ostr, Bureaucrat const &bur){
	ostr << bur.getName() << " bureaucrat grade " << bur.getRang() << "\n";
	return ostr;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("the grade is too high, it cannot be under 1");
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("the grade is too low, it cannot be over 150");
}

void Bureaucrat::signForm(Form &form){
	try
	{
		form.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->name << " cannot sign because " << e.tt() << std::endl;
		return;
	}
	std::cout << this->name << " signs " << form.getName() << std::endl;
}