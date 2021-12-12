/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:49:57 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/12 13:01:28 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

#ifndef SOURCE_SIZE
	#define SOURCE_SIZE 4
#endif

#ifndef MATERIA_SOURCE_H
	#define MATERIA_SOURCE_H
	class MateriaSource: public IMateriaSource
	{
		private:
			AMateria	**materia_source;
		public:
			MateriaSource(void);
			MateriaSource(MateriaSource const & source);
			MateriaSource	&operator=(MateriaSource const & source);
			~MateriaSource(void);
			void learnMateria(AMateria *m);
			AMateria* createMateria(std::string const & type);
	};
#endif
