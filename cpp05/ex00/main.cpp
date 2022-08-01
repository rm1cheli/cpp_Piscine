/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:18 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 16:13:24 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat	gerard("Gerard", 150);
		Bureaucrat	christian("Christian", 1);

		std::cout << gerard << std::endl;
		std::cout << christian << std::endl;

		gerard.increaseRank();
		std::cout << gerard << std::endl;
		gerard.downGrade();
		std::cout << gerard << std::endl;
		
		try
		{
			gerard.downGrade();
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}

		try
		{
			christian.increaseRank();
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}

		std::cout << gerard << std::endl;
		std::cout << christian << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;
	
	{
		try
		{
			Bureaucrat	michel("Michel", 151);
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
		
		try
		{
			Bureaucrat	jj("Jean-Jacques", -7);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
	}
	return(0);
}