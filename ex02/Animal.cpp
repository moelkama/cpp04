/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:24:04 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/17 14:16:13 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout<<"AAnimal Default Constractor called"<<std::endl;
    this->type = "Not Set";
}

AAnimal::AAnimal(const AAnimal& other)
{
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    this->type = other.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout<<"AAnimal Destructor called"<<std::endl;
}

std::string     AAnimal::getType() const
{
    return (this->type);
}