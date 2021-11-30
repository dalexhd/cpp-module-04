/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:57:38 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/30 19:13:12 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "[🐱] Miauuuuu" << std::endl;
}

Cat::Cat(void): brain(new Brain)
{
	std::cout << "[🐱] default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &cat) : brain(new Brain)
{
	(void)cat;
	std::cout << "[🐱] Copy constructor called." << std::endl;
	this->setType("Dog");
}

Cat::~Cat()
{
	std::cout << "[🐱] destructor called" << std::endl;
	delete this->brain;
}
