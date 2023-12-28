/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:59:26 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/16 21:51:18 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	
}

Cure::Cure(Cure const &Cure){
	*this = Cure;
}

Cure &Cure::operator=(Cure const &Assign){
	type = Assign.getType();
	return *this;
}

AMateria *Cure::clone() const {
	AMateria *res = new Cure;
	return (res);
}

void Cure::use(ICharacter& target){
	cout << "* heals " << target.getName() << "'s wounds *"<< endl;	
}

Cure::~Cure(){
	
}