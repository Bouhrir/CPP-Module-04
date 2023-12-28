/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:27:05 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 19:47:21 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal{
	protected:
		string type;
	public:
		Animal();
		Animal(Animal const &Copy);
		Animal &operator = (Animal const &assign);
		virtual  void makeSound() const = 0;
		string getType() const;
		virtual ~Animal();
};
