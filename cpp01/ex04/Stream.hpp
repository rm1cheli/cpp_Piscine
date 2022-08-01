/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:58:12 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/17 13:58:13 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_HPP
#define STREAM_HPP
#include <iostream>
#include <fstream>

class Stream{
	public:
		Stream(std::string filename);
		~Stream();
		int replace(std::string s1, std::string s2);
	private:
		void inread(std::string &dest);
		void outwrite(std::string &str);
		std::ifstream file;
		std::ofstream newFile;
};

#endif