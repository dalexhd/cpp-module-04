/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:29:54 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 13:02:34 by aborboll         ###   ########.fr       */
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
		private:
			std::string	type;
		public:
			Animal(void);
			~Animal();
	};
#endif
