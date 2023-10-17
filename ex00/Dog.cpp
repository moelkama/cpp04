/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:26:45 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/16 18:25:48 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Default Constractor called"<<std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& other)
{
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout<<"Dog Destructor called"<<std::endl;
}

void    Dog::makeSound() const
{
    std::cout<<"Dog : AppppppAppppp"<<std::endl;
}