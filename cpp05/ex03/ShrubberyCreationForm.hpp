/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:28 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:09:29 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>

class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &scf);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		void execute(Bureaucrat const & executor) const;
		std::string const	getTarget() const;
	private:
		std::string	const target;
};

#endif