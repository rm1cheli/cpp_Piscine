/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:00:03 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 14:00:08 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char* argv[]){
	Harl harl;

	if(argc != 2 || (std::strncmp(argv[1], "WARNING", 7) != 0
		&& std::strncmp(argv[1], "INFO", 4) != 0
		&& std::strncmp(argv[1], "DEBUG", 5) != 0
		&& std::strncmp(argv[1], "ERROR", 5)) != 0){
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (0);
		}
	std::string level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++){
		if(level[i] == argv[1])
			harl.swithH(i);
	}
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
}