/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:26:45 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/17 14:04:04 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Default Constractor called"<<std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    this->brain = new Brain();
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    this->type = other.type;
    this->brain->operator=(*(other.brain));
    return (*this);
}

Dog::~Dog()
{
    std::cout<<"Dog Destructor called"<<std::endl;
    delete this->brain;
}

void    Dog::makeSound() const
{
    std::cout<<"Dog : AppppppAppppp"<<std::endl;
}