/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:28:37 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 16:45:44 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

#ifndef WRONG_ANIMAL_H
	#define WRONG_ANIMAL_H
	class WrongAnimal
	{
		protected:
			std::string	type;
		public:
			void				setType(std::string type);
			std::string const	&getType(void) const;
			void				makeSound(void) const;
			WrongAnimal(void);
			virtual ~WrongAnimal();
	};
#endif
