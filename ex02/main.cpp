/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:22:42 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/28 22:50:12 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int  main(){
	const Animal* spike = new Dog();
	const Animal* tom = new Cat();

	cout << spike->getType() << endl;
	spike->makeSound();
	cout << tom->getType() << endl;
	tom->makeSound();
	
	delete spike;
	delete tom;	
	return 0;
}