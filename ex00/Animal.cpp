/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:24:04 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/12 11:19:06 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal Default Constractor called"<<std::endl;
    this->type = "Not Set";
}

Animal::Animal(const Animal& other)
{
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout<<"Animal Destructor called"<<std::endl;
}

void   Animal::makeSound() const
{
    std::cout<<"Animal : Sound"<<std::endl;
}

std::string     Animal::getType() const
{
    return (this->type);
}