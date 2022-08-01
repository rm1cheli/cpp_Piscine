/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:16 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:09:17 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(std::string name_form, std::string target){
	Form *tt;
	std::string str[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	int i = 0;
	while( i < 3 && str[i] != name_form)
		i++;
	if (i == 3){
		std::cout << name_form << " form does not exist\n";
		return NULL;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << name_form << std::endl;
		tt = new PresidentialPardonForm(target);
		break;
	case 1:
		std::cout << "Intern creates " << name_form << std::endl;
		tt = new ShrubberyCreationForm(target);
		break;
	case 2:
		std::cout << "Intern creates " << name_form << std::endl;
		tt = new RobotomyRequestForm(target);
		break;
	default:
		tt = NULL;
		break;
	}
	return tt;
}
