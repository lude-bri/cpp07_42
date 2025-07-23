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

#include <iostream>
#include <string>

#ifdef DEBUG
# define DEBUG_MSG(x) std::cout << "[DEBUG] : " << x << std::endl
#else
# define DEBUG_MSG(x)
#endif


template<typename T>
class Array {

protected:

	T				*_array;
	unsigned int	_len;

public:
	//Construction with no parameter
	Array() {
		DEBUG_MSG("A Constructor for Array was called"); 
	}

	//Constructor with an usigned int n as parameter
	Array(unsigned int n) {
		DEBUG_MSG("A Parametric Constructor for Array was called");
		_array = new T[n]();
	}

	//Copy Constructor
	Array(const Array &copy){
		DEBUG_MSG("A Copy Constructor for Array was called");
	}

	//Assignment Operator
	Array &operator=(const Array &copy){
		DEBUG_MSG("An Assignment Operator for Array was called");

	}

	//Destructor
	~Array() {
		DEBUG_MSG("A Destructor for Array was called");
	}


};
