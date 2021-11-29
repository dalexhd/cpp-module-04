/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:29:54 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 15:21:38 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

#ifndef ANIMAL_H
	#define ANIMAL_H
	class Animal
	{
		protected:
			std::string	type;
		public:
			void				setType(std::string type);
			std::string const	&getType(void) const;
			virtual void		makeSound(void) const;
			Animal(void);
			virtual ~Animal();
	};
#endif
