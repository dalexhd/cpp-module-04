/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:57:38 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/30 20:11:46 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "[🐶] Guauuu" << std::endl;
}

Dog::Dog(void): brain(new Brain)
{
	std::cout << "[🐶] default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &dog)
{
	this->brain = new Brain(*(dog.brain));
	std::cout << "[🐶] Copy constructor called." << std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << "[🐶] destructor called" << std::endl;
	delete this->brain;
}
