/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:20:27 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:28 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	{
		const Animal* (animals[10]);
	
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				animals[i] = new Cat;
			else
				animals[i] = new Dog;
		}
		std::cout << "---------------" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
		}
		std::cout << "---------------" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
		}
	}
	std::cout << "=================" << std::endl;
	{
		Cat * mew = new Cat;
		Cat * mew2 = new Cat( *mew );
		Dog * dog = new Dog;
		Dog * dog2 = new Dog( *dog );
	
		std::cout << "\n\n" << std::endl;
		delete dog;
		delete dog2;
		delete mew;
		delete mew2;
	}
}