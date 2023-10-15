/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:59:22 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/15 22:28:39 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{

	// Point t1(0.69, 2.14), t2(1.1, -0.42);
	// std::cout << "The determinant is: " << det(t1, t2) << std::endl;

	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 3);

	std::cout << "Testing on the vertices:" << std::endl;
	std::cout << "The result of the bsp is:" << Point::bsp(a, b, c, a) << std::endl;
	std::cout << "The result of the bsp is:" << Point::bsp(a, b, c, b) << std::endl;
	std::cout << "The result of the bsp is:" << Point::bsp(a, b, c, c) << std::endl;
	std::cout << "Testing Near the vertices:" << std::endl;
	Point t1(0.1, 0.1);
	std::cout << "The result of the bsp in is:" << Point::bsp(a, b, c, t1) << std::endl;
	Point t1_(-0.1, -0.1);
	std::cout << "The result of the bsp out is:" << Point::bsp(a, b, c, t1_) << std::endl;
	
	Point t2(2, 2.9);
	std::cout << "The result of the bsp in is:" << Point::bsp(a, b, c, t2) << std::endl;
	Point t2_(2, 3.1);
	std::cout << "The result of the bsp out is:" << Point::bsp(a, b, c, t2_) << std::endl;
	
	Point t3(3.9, 0.1);
	std::cout << "The result of the bsp in is:" << Point::bsp(a, b, c, t3) << std::endl;
	Point t3_(4.1, -0.1);
	std::cout << "The result of the bsp out is:" << Point::bsp(a, b, c, t3_) << std::endl;
}