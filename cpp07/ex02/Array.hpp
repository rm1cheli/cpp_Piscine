/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:42:10 by rmicheli          #+#    #+#             */
/*   Updated: 2022/07/02 11:42:11 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template < typename T >
class Array{
	private:
		T * array;
		unsigned int _size;
	public:
		Array() : _size(0){
			this->array = new T[0]; 
		}

		~Array(){
			delete this->array;
		}

		Array(unsigned int i) : _size(i){
			this->array = new T[i];
		}
		Array(Array const &arr) : _size(arr.size()){
			this->array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++){
				this->array[i] = arr.array[i];
			}
		}
		void operator=(T const &arr) {
			_size = arr.size();
			delete this->array;
			this->array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++){
				this->array[i] = arr.array[i];
			}
		}
		T & operator[](unsigned int i)
		{
			if (static_cast<int> (i) < 0 || i >= this->_size){
				std::cout << static_cast<int> (i) << std::endl;
				throw(std::exception());
			}
			return (this->array[i]);
		}
		unsigned int size() const{
			return _size;
		}
};

#endif
