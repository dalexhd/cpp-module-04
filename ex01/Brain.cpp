/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:51:40 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/30 19:58:48 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Brain Copy constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
