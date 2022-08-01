/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:24 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:09:25 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robot", 72, 45), target(""){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rrf) : Form("Robot", 72, 45), target(rrf.getTarget()) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	other.getGradeEx();
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot", 72, 45), target(target){
}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string const RobotomyRequestForm::getTarget() const{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	srand(time(0));
	if(executor.getRang() > this->getGradeEx())
		throw (RobotomyRequestForm::GradeTooLowException());
	else if (!this->getSig())
		throw (RobotomyRequestForm::FormNotSigned());
	else{
			std::cout << "Brzrzrzrrrrzrzbllblblblblblllblblblblblblblblght" << std::endl;
			if (rand() % 2)
				std::cout << this->target << " has been lobotomised" << std::endl;
			else
				std::cout << this->target << "'s lobotomy failed" << std::endl;
		}
}
