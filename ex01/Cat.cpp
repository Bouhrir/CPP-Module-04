/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:31:22 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/15 15:49:00 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
  	cout << type << ": Default constractor called" << endl;
	brain = new Brain();
}

Cat::Cat(Cat const &Copy){
  	cout << "Cat: Copy constractor called" << endl;
	type = Copy.getType();
	brain = new Brain();
	*brain = *Copy.brain;
}

Cat &Cat::operator = (Cat const &assign){
	type = assign.getType();
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *assign.brain;
	return *this;
}

void Cat::makeSound() const {
	cout << "MEAAAAO🐱" << endl;
}

Cat::~Cat(){
	type = "Cat";
  	cout << type << ": Default destractor called" << endl;
	delete brain;
}

