/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:44:40 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:40:12 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src.getType())
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure &	Cure::operator=(Cure const & src)
{
	(void)src;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called." << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
};

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
