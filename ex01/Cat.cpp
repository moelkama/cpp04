/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:26:39 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/17 14:02:37 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default Constractor called"<<std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other)
{
    this->brain = new Brain();
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    this->type = other.type;
    this->brain->operator=(*(other.brain));
    return (*this);
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor called"<<std::endl;
    delete this->brain;
}

void    Cat::makeSound() const
{
    std::cout<<"Cat : meoooooooo"<<std::endl;
}