/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:10 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:11 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();

		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		cat->makeSound();
		dog->makeSound();
		delete cat;
		delete dog;
	}
	std::cout << "-------------------" << std::endl;
	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << animal->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		animal->makeSound();
		cat->makeSound();
		delete animal;	
		delete cat;
	}
}