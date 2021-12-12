/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:34:02 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:38:42 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("Anonymous type")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & src) : type(src)
{
	std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter & target)
{
	(void)target;
	std::cout << "Using Amateria!" << std::endl;
}
