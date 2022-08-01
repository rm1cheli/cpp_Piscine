/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:49 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:08:50 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp" 

int main()
{
	ShrubberyCreationForm	fo("forest");
	RobotomyRequestForm		ro("Gladys");
	PresidentialPardonForm	pr("Peter");
	Bureaucrat				jo("John", 1);
	Bureaucrat				jojo("Joseph", 150);

	try
	{
		jo.executeForm(fo);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.signForm(fo);
	try
	{
		jojo.executeForm(fo);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.executeForm(fo);

	jo.signForm(ro);
	try
	{
		jojo.executeForm(ro);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.executeForm(ro);

	jo.signForm(pr);
	try
	{
		jojo.executeForm(pr);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	jo.executeForm(pr);
}