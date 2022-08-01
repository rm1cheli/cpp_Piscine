/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:25 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:09:26 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &rrf);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		void execute(Bureaucrat const & executor) const;
		std::string const	getTarget() const;
	private:
		std::string	const target;
};

#endif