/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:57:38 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 16:42:43 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Miauuuuu 🐱" << std::endl;
}

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
