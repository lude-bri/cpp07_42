/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:35:57 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/22 19:08:49 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T, typename F>
void	iter(T *array, size_t size, F f) {
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	print(const T &a) {
	std::cout << a << std::endl;
}

template<typename T>
void	addAndPrint(T &a) {
	a += 1;
	std::cout << a << std::endl;
}
