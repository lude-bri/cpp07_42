/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:18:54 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/22 19:20:26 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include <iostream>
#include <string>

//DEBUG MODE
#ifdef DEBUG
# define DEBUG_MSG(x) std::cout << "[DEBUG] : " << x << std::endl
#else
# define DEBUG_MSG(x)
#endif

//COLORS
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

template<typename T>
class Array {

protected:

	T				*_array;
	unsigned int	_len;

public:
	//Construction with no parameter
	Array() : _array(nullptr), _len(0) {
		DEBUG_MSG("A Constructor for Array was called"); 
	}

	//Constructor with an usigned int n as parameter
	Array(unsigned int n) : _len(n) {
		DEBUG_MSG("A Parametric Constructor for Array was called");
		_array = new T[n]();
	}

	//Copy Constructor
	Array(const Array &copy) : _array(nullptr), _len(copy._len) {
		DEBUG_MSG("A Copy Constructor for Array was called");
		
		_array = new T[copy.size()];
		for (int i = 0; i < this->_len; i++)
			_array[i] = copy._array[i];
		*this = copy;
	}

	//Assignment Operator
	Array &operator=(const Array &copy){
		DEBUG_MSG("An Assignment Operator for Array was called");
	
		if (this != &copy) {
			if (_array)
				delete [] _array;
			_array = new T[copy.size()];
			for (int i = 0; i < _len; i++)
				_array[i] = copy._array[i];
			_len = copy.size();
		}
		return *this;
	}

	//Destructor
	~Array() {
		DEBUG_MSG("A Destructor for Array was called");
	}

	//Operator []
	T	&operator[](unsigned int index) {
		DEBUG_MSG("A [] Operator for Array was called");
		if (index >= this->_len)
			throw std::exception();
		return this->_array[index];
	}

	//Out of Bounds class
	class OutOfBoundsException : public std::exception {
		virtual const char *what() const throw() {
			return "Index out of bounds";
		}
	};

	//Size member function
	unsigned int	size() const { return _len; }
};
