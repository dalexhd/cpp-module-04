/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:52:26 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:29:44 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_H
	#define ICE_H
	class Ice: public AMateria
	{
		public:
			Ice(void);
			Ice(const Ice & src);
			Ice	&operator=(Ice const & src);
			~Ice(void);
			AMateria* clone() const;
			void use(ICharacter & target);
	};
#endif
