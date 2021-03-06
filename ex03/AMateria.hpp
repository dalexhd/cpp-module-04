/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:35:22 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:19:34 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "ICharacter.hpp"

#ifndef A_MATERIA_H
	#define A_MATERIA_H
	class AMateria
	{
		protected:
			std::string	type;
		public:
			AMateria(void);
			AMateria(std::string const & src);
			virtual ~AMateria(void);
			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter & target);
	};
#endif
