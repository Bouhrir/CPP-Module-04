/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:54:49 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/28 23:23:10 by obouhrir         ###   ########.fr       */
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

string Animal::getType() const{
	return type;
}

Animal::~Animal(){
  	cout << type << ": Default destractor called" << endl;
}