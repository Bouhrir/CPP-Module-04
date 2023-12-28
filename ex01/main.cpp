/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:22:42 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 19:46:31 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void DeepCopie(){
	Dog a, b;
	
	cout << "++\n";
	a = b;
	cout << "++\n";
	
	cout << "--\n";
	Dog c(a);
	cout << "--\n";
}

int  main(){
	
	const Animal *simba[6];
	for (int i = 0; i < 6;i++){
		if (i < 3){
			simba[i] = new Cat;
			simba[i]->makeSound();
		}
		else{
			simba[i] = new Dog;
			simba[i]->makeSound();
		}
	}
	cout << endl;
	cout << "=================================\n";
	DeepCopie();
	cout << "=================================\n";
	cout << endl;
	
	for(int i = 0;i < 6;i++){
		delete simba[i];
	}
	return 0;
}