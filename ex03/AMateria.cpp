/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:24:04 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/16 15:39:18 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	type = "default";
}

AMateria::AMateria(AMateria const &Copy){
	*this = Copy;
}

AMateria::AMateria(std::string const & type){
		this->type = type;
}

AMateria &AMateria::operator=(AMateria const &Assign){
	this->type = Assign.getType();
	return *this;
}

std::string const & AMateria::getType() const{
	return type;
}

void AMateria::use(ICharacter& __unused target){
	
}

AMateria::~AMateria(){
	
}