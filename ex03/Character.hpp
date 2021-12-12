/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:39:15 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:28:05 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifndef INV_SIZE
	#define INV_SIZE 4
#endif

#ifndef CHARACTER_H
	#define CHARACTER_H
	class Character: public ICharacter
	{
		private:
			std::string	name;
			AMateria	**inventory;
		public:
			Character(void);
			Character(const Character & src);
			Character(std::string const name);
			Character	&operator=(Character const & src);
			~Character(void);
			std::string const & getName() const;
			void	equip(AMateria* m);
			void	unequip(int idx);
			void	use(int idx, ICharacter & target);
	};
#endif
