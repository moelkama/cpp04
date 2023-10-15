/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:26:19 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/13 17:47:07 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal
{
protected:
    std::string type;
public:
    Animal(void);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal(void);
    virtual std::string getType() const;
    virtual void    makeSound() const;
};

#endif