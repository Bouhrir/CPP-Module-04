/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:47:19 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 16:19:32 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(){
  	cout <<  "Brain : Default constractor called" << endl;
}

Brain::Brain(Brain const &Copy){
  	cout << "Brain: Copy constractor called" << endl;
	*this = Copy;
}

Brain &Brain::operator = (Brain const &assign){
	for(int i = 0; i < 100;i++){
		ideas[i] = assign.ideas[i];
	}
	return *this;
}

Brain::~Brain(){
  	cout << "Brain : Default destractor called" << endl;
}