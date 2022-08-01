/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:05:03 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/30 17:05:04 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
	~Data();

	Data(std::string const &str);
	Data();
	Data(Data &c);
	Data &operator=(const Data &other);
	std::string getSer() const;
private:
	std::string _ser;
};

#endif  