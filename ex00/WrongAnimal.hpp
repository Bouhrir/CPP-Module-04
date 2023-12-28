/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:04:07 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 13:15:20 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::cout;
using std::string;
using std::endl;

class WrongAnimal {
	protected:
		string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &Copy);
		WrongAnimal &operator = (WrongAnimal const &assign);
		void makeSound() const ;
		string getType() const;
		virtual ~WrongAnimal();
};