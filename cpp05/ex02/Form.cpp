/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:47 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:08:48 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name(""), sig(false), gradeSig(150), gradeEx(150)
{
	std::cout << "Default constructor for Form called" << std::endl;
	return;
}

Form::Form(Form &src) : name(src.getName()), sig(src.getSig()) , gradeSig(src.getGradeSig()), gradeEx(src.getGradeEx()){
	std::cout << "Copy constructor for Form called" << std::endl;
	return;
}

Form	&Form::operator=( Form const & rhs )
{
	this->sig = rhs.sig;
	std::cout << "Name and grades are const and can't be overwritten, only isSigned was copied" << std::endl;
	std::cout << "Assignement operator for Form called" << std::endl;
	return *this;
}

Form::Form(std::string const & name, int grade, int grade_ex) : name(name), gradeSig(grade), gradeEx(grade_ex){
	if (grade > 150 || grade_ex > 150)
		throw (Form::GradeTooLowException());
	if (grade < 1 || grade_ex < 1)
		throw (Form::GradeTooHighException());
}

Form::~Form(){}

std::string Form::getName() const{
	return this->name;
}

bool Form::getSig() const{
	return this->sig;
}

int Form::getGradeSig() const{
	return this->gradeSig;
}

int Form::getGradeEx() const{
	return this->gradeEx;
}

void Form::beSigned(Bureaucrat &bur){
	if(bur.getRang() <= this->gradeSig)
		this->sig = 1;
	else
		throw (Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &ostr, Form const &form){
	ostr << form.getName() << " signed: " << form.getSig() << " signature level " << form.getGradeSig() << ", performance level " << form.getGradeEx() << "\n";
	return ostr;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("the grade is too high");
}
const char* Form::GradeTooLowException::what() const throw(){
	return ("the grade is too low");
}
const char* Form::FormNotSigned::what() const throw(){
	return ("Form Not Signed");
}

void	Form::execute(Bureaucrat const & b) const
{
	(void)b;
	throw(Form::FormNotSigned());
}