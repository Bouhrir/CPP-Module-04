/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:34:18 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/15 15:49:09 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
  	cout << type << ": Default constractor called" << endl;
	brain = new Brain();
}

Dog::Dog(Dog const &Copy){
	type = Copy.getType();
  	cout << "Dog: Copy constractor called" << endl;
	brain = new Brain();
	*brain = *Copy.brain;
}

Dog &Dog::operator = (Dog const &assign){
  	cout << "Dog: Copy Assignment called" << endl;
	type = assign.getType();
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *assign.brain;
	return *this;
}

void Dog::makeSound() const {
	cout << "NBIIII7🐶" << endl;
}

Dog::~Dog(){
	type = "Dog";
  	cout << type << ": Default destractor called" << endl;
	delete brain;
}