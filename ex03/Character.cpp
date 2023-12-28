/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:17:13 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/11 14:56:57 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(string const &name)
{
	this->name = name;
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
		tmp[i] = NULL;
    }
}

Character::Character(Character const & Copy)
{
    *this = Copy;
}

Character& Character::operator=(Character const & Assign)
{
    this->name = Assign.name;
    for (int i = 0; i < 4; i++)
		*this->inventory[i] = *Assign.inventory[i];
    return *this;
}

void    Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
    	if (this->inventory[i] == NULL)
    	{
        	this->inventory[i] = m;
        	return;
   		}
	}
	delete m;
	std::cerr << "can't equip" << endl;
}

void    Character::unequip( int idx )
{
	if (this->inventory[idx] && (idx >= 0 && idx < 4))
    {
		tmp[idx] = inventory[idx];
        this->inventory[idx] = NULL;
    }
    else
		std::cerr << "can't unequip" << endl;
}

void    Character::use(int idx, ICharacter& target) {
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
	else
		std::cerr << this->name << " can't (use)" << endl;
}

string const& Character::getName() const {
    return this->name;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++){
		if (this->inventory[i])
        	delete this->inventory[i];
		if (this->tmp[i])
        	delete this->tmp[i];
	}
}