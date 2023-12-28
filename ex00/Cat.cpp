/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:31:22 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 16:36:45 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
  	cout << type << ": Default constractor called" << endl;
}

Cat::Cat(Cat const &Copy){
  	cout << "Cat: Copy constractor called" << endl;
	*this = Copy;
}

Cat &Cat::operator = (Cat const &assign){
	type = assign.getType();
	return *this;
}

void Cat::makeSound() const {
	cout << "MEAAAAO🐱" << endl;
}

Cat::~Cat(){
	type = "Cat";
  	cout << type << ": Default destractor called" << endl;
}

