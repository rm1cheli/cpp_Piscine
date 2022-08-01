/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:35 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:08:36 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form{
	private:
		const std::string name;
		bool sig;
		const int gradeSig;
		const int gradeEx;
	public:
		Form(std::string const & name, int grade, int grade_ex);
		Form();
		Form &operator=(const Form &other);
		Form(Form &src);
		~Form();
		std::string getName() const;
		bool getSig() const;
		int getGradeSig() const;
		int getGradeEx() const;
		void beSigned(Bureaucrat &bur);
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* tt();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* tt();
		};
};

std::ostream & operator<<(std::ostream &ostr, Form const &form);

#endif