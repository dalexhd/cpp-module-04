/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:29:27 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 16:44:56 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat sound 🐱" << std::endl;
}

WrongCat::WrongCat(void)
{
	std::cout << "Wrong cat default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;
}
