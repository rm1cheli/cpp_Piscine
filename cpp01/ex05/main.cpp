/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:59:43 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:59:43 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(void){
	Harl harl;
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
}