/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:47:53 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 18:49:29 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

std::string const	&Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound ❓" << std::endl;
}
