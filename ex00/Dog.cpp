/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:34:18 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 16:36:52 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
  	cout << type << ": Default constractor called" << endl;
}

Dog::Dog(Dog const &Copy){
  	cout << "Dog: Copy constractor called" << endl;
	*this = Copy;
}

Dog &Dog::operator = (Dog const &assign){
	type = assign.getType();
	return *this;
}

void Dog::makeSound() const {
	cout << "NBIIII7🐶" << endl;
}

Dog::~Dog(){
	type = "Dog";
  	cout << type << ": Default destractor called" << endl;
}