/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:18:58 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:41:07 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src.getType())
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice &	Ice::operator=(Ice const & src)
{
	(void)src;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called." << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
};

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
