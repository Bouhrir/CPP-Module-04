/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:08:12 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/16 22:12:31 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
	    string name;
	    AMateria *inventory[4];
	    AMateria *tmp[4];
		
	public:
	    Character(std::string const &name);
	    Character(Character const &Copy);
		Character&          operator=(Character const &rhs);
	
	    string const&  getName() const;
	    void                equip(AMateria* m);
	    void                unequip(int idx);
	    void                use(int idx, ICharacter& target);
	    ~Character();
};