/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:03:25 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 16:37:11 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "WrongAnimal";
  	cout << type << ": Default constractor called" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &Copy){
  	cout << "WrongAnimal: Copy constractor called" << endl;
	*this = Copy;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &assign){
	this->type = assign.getType();
	return *this;
}

void WrongAnimal::makeSound() const {
	cout << "SIMBAAA" << endl;
}

string WrongAnimal::getType() const{
	return type;
}

WrongAnimal::~WrongAnimal(){
	type = "WrongAnimal";
  	cout << type << ": Default destractor called" << endl;
}