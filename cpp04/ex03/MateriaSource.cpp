/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:41 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:42 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	return;
}

MateriaSource::~MateriaSource(){}

void MateriaSource::learnMateria(AMateria* am){
	int i = 0;

	while (this->inv[i])
		i++;
	if (i < 4)
		this->inv[i] = am;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while(i < 4)
	{
		if (this->inv[i] && this->inv[i]->getType() == type)
		{
			return(this->inv[i]->clone());
		}
		i++;
	}
	return(NULL);
}