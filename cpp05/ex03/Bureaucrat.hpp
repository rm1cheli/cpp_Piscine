/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:12 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:09:13 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
class Form;
#include "Form.hpp"

class Bureaucrat{
	private:
		std::string const name;
		int rang;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &bur);
		Bureaucrat	&operator=(const Bureaucrat &other);
		Bureaucrat(std::string const name, int rang);
		~Bureaucrat();
		void increaseRank(void);
		void downGrade(void);
		std::string getName(void) const;
		int getRang(void) const;
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		void signForm(Form &form);
		void executeForm(Form const & form); 
};

std::ostream & operator<<(std::ostream &ostr, Bureaucrat const &bur);

#endif