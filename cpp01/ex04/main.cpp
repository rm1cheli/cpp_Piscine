/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:58:06 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:58:18 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include "Stream.hpp"

int main(int argc, char* argv[]){
	if (argc != 4){
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
	Stream file(argv[1]);
	file.replace(argv[2],argv[3]);
	return (0);
}
