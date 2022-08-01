/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:19:43 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/26 15:19:44 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
class IMateriaSource;
class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*(inv[4]);
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria* am);
		AMateria* createMateria(std::string const & type);
};

#endif