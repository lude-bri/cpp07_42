/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:01:44 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/23 13:01:46 by lude-bri         ###   ########.fr       */
/*                                                                            */

            bool elementsCorrect = true;
            for (unsigned int i = 0; i < intArray.size(); i++) {
                if (intArray[i] != i * 10) {
                    elementsCorrect = false;
                    break;
/* ************************************************************************** */

#include "../inc/Array.hpp"
#include <iostream>

void	printTestHeader(std::string &test) {
	std::cout << YELLOW << "== " << test << " ==" << RESET << std::endl;
}

int main() {

	printTestHeader("Test 00. Array of ints");
	{
		Array<int> emptyArray;

	}
}
