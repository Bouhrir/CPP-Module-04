/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:59:26 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/16 21:51:09 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const &Ice){
	*this = Ice;
}

Ice &Ice::operator=(Ice const &Assign){	
	type = Assign.getType();
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *res = new Ice;
	return (res);
}

void Ice::use(ICharacter& target){
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;	
}

Ice::~Ice(){
	
}