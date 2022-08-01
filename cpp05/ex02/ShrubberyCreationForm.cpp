/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:56 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/27 15:08:57 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("tree", 145, 137), target(""){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &rrf) : Form("tree", 145, 137), target(rrf.getTarget()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	other.getGradeEx();
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("tree", 145, 137), target(target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string const ShrubberyCreationForm::getTarget() const{
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if(executor.getRang() > this->getGradeEx())
		throw (ShrubberyCreationForm::GradeTooLowException());
	else if (!this->getSig())
		throw (ShrubberyCreationForm::FormNotSigned());
	else{
			std::ofstream ofs(this->getTarget() + "_shrubbery");
			ofs << "                                                         ." << std::endl <<
			"                                              .         ;  " << std::endl <<
			"                 .              .              ;%     ;;   " << std::endl <<
			"                   ,           ,                :;%  %;   " << std::endl <<
			"                    :         ;                   :;%;'     ., "  << std::endl <<
			"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
			"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
			"              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
			"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
			"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
			"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
			"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
			"                      `@%:.  :;%.         ;@@%;'" << std::endl <<
			"                        `@%.  `;@%.      ;@@%; " << std::endl <<
			"                          `@%%. `@%%    ;@@%; " << std::endl <<
			"                            ;@%. :@%%  %@@%; " << std::endl <<
			"                              %@bd%%%bd%%:; " << std::endl <<
			"                                #@%%%%%:;;" << std::endl <<
			"                                %@@%%%::;" << std::endl <<
			"                                %@@@%(o);  . '" << std::endl <<
			"                                %@@@o%;:(.,' " << std::endl <<
			"                            `.. %@@@o%::;" << std::endl <<
			"                               `)@@@o%::;" << std::endl <<
			"                                %@@(o)::;" << std::endl <<
			"                               .%@@@@%::;" << std::endl <<
			"                               ;%@@@@%::;." << std::endl <<
			"                              ;%@@@@%%:;;;." << std::endl <<
			"                          ...;%@@@@@%%:;;;;,.."<< std::endl;
			ofs.close();
		}
}
