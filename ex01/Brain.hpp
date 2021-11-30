/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:19:16 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/30 19:57:23 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

#ifndef BRAIN_H
	#define BRAIN_H
	class Brain
	{
		private:
			std::string	ideas[100];
		public:
			Brain(void);
			Brain(const Brain &brain);
			~Brain();
	};
#endif
