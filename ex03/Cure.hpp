/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:44:30 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:29:30 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_H
	#define CURE_H
	class Cure: public AMateria
	{
		public:
			Cure(void);
			Cure(const Cure & src);
			Cure	&operator=(Cure const & src);
			~Cure(void);
			AMateria* clone() const;
			void use(ICharacter & target);
	};
#endif
