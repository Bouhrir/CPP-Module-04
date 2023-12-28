/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:00:12 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/16 18:46:26 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

#include "ICharacter.hpp"
class ICharacter;
class AMateria {
	protected:
		string type;
	public:
		AMateria();
		AMateria(AMateria const &Copy);
		AMateria(std::string const & type);

		AMateria &operator=(AMateria const &Assign);
		
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria();
};
