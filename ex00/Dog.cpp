/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:57:38 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 16:43:17 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Guauuu 🐶" << std::endl;
}

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
