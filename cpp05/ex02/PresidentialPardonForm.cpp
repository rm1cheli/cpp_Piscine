/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:51 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:08:52 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Robot", 25, 5), target(""){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &ppf) : Form("Robot", 25, 5), target(ppf.getTarget()) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	other.getGradeEx();
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :Form("Robot", 25, 5), target(target){
}

PresidentialPardonForm::~PresidentialPardonForm(){}

std::string const PresidentialPardonForm::getTarget() const{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if(executor.getRang() > this->getGradeEx())
		throw (PresidentialPardonForm::GradeTooLowException());
	else if (!this->getSig())
		throw (PresidentialPardonForm::FormNotSigned());
	else{
			std::cout << this->target << " has been forgive by Zafod Beeblebrox" << std::endl;
		}
}
