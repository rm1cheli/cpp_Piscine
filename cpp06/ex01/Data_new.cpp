/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data_new.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:05:01 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/30 17:05:02 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}