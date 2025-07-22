/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:36:01 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/22 19:15:12 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main(void) {

	int intArray[] = {0, 1, 2, 3, 4, 5, 6};
	char charArray[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	std::cout << "Test 00. Array of Ints" << std::endl;
	size_t sizeArray = (sizeof(intArray) / sizeof(int));
	iter(intArray, sizeArray, print<int>);
	std::cout << std::endl;

	std::cout << "Test 01. Adding Elements - Int" << std::endl;
	iter(intArray, sizeArray, addAndPrint<int>);
	std::cout << std::endl;
	
	std::cout << "Test 02. Array of Chars" << std::endl;
	sizeArray = (sizeof(charArray) / sizeof(char));
	iter(charArray, sizeArray, print<char>);
	std::cout << std::endl;
	
	std::cout << "Test 03. Adding Elements - Char" << std::endl;
	iter(charArray, sizeArray, addAndPrint<char>);
	std::cout << std::endl;
}
