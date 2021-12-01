/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:28:34 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 16:45:05 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Wrong animal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor called" << std::endl;
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong animal sound ❓" << std::endl;
}
