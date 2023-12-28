/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:24:39 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/17 15:42:51 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for(int i = 0;i < 4;i++){
		materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &Copy){
	*this = Copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &Assign){
	for(int i = 0;i < 4;i++){
		*this->materia[i] = *Assign.materia[i];
	}
	return *this;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4;i++)
	{
		if (materia[i] && materia[i]->getType() == type)
			return materia[i]->clone();
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria* materia){
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL && materia)
		{
			this->materia[i] = materia;
			return ;
		}
	}
	delete materia;
}

MateriaSource::~MateriaSource(){
	for(int i = 0;i < 4;i++){
		if (materia[i])
			delete materia[i];
	}
}