/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:28:58 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/30 19:19:08 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define MAX_ANIMALS 10

int main(void)
{
	////////////////////////////////
	// First part (Array + brain) //
	////////////////////////////////
	std::cout << "-----------------------------" << std::endl <<
		"First part (Normal + Brain)" << std::endl << "-----------------------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	/////////////////////////////////
	// Second part (Array + brain) //
	/////////////////////////////////
	std::cout << "-----------------------------" << std::endl <<
		"Second part (Array + brain)" << std::endl << "-----------------------------" << std::endl;
	const Animal* animal[MAX_ANIMALS];

	for (size_t i = 0; i < MAX_ANIMALS; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	for (size_t i = 0; i < MAX_ANIMALS; i++)
		delete animal[i];
	///////////////////////////////
	// Third part (Copy + brain) //
	///////////////////////////////
	Dog	dog;
	Cat	cat;

	Dog dogReplica(dog);
	dog.setType("Alert!!! this is a dog type change.");
	Cat catReplica(cat);
	return (0);
}
