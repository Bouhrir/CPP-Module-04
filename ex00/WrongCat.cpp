/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:28 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 16:37:34 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
  	cout << type << ": Default constractor called" << endl;
}

WrongCat::WrongCat(WrongCat const &Copy){
  	cout << "WrongCat: Copy constractor called" << endl;
	*this = Copy;
}

WrongCat &WrongCat::operator = (WrongCat const &assign){
	type = assign.getType();
	return *this;
}

void WrongCat::makeSound() const {
	cout << "MEAAAAO🐱" << endl;
}

WrongCat::~WrongCat(){
	type = "WrongCat";
  	cout << type << ": Default destractor called" << endl;
}
