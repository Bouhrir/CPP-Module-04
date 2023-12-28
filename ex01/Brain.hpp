/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:39:25 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/13 17:35:58 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain {
	protected:
		string ideas[100];
	public:
		Brain();
		Brain(Brain const &Copy);
		Brain &operator = (Brain const &assign);
		~Brain();
};