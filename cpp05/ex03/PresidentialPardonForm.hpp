/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:22 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:09:23 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>

class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &ppf);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		void execute(Bureaucrat const & executor) const;
		std::string const	getTarget() const;
	private:
		std::string	const target;
};

#endif