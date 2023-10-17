/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:26:39 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/16 18:25:53 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default Constractor called"<<std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& other)
{
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor called"<<std::endl;
}

void    Cat::makeSound() const
{
    std::cout<<"Cat : meoooooooo"<<std::endl;
}