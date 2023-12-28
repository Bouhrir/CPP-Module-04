/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:54:49 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 16:19:48 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	type = "Animal";
  	cout << type << ": Default constractor called" << endl;
}

Animal::Animal(Animal const &Copy){
	
  	cout << "Animal: Copy constractor called" << endl;
	*this = Copy;
}

Animal &Animal::operator = (Animal const &assign){
	this->type = assign.getType();
	return *this;
}

void Animal::makeSound() const {
	cout << "SIMBAAA" << endl;
}

string Animal::getType() const{
	return type;
}

Animal::~Animal(){
	type = "Animal";
  	cout << type << ": Default destractor called" << endl;
}