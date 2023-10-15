/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:26:49 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/15 18:59:43 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <string>
int main(void)
{
    Cat   b1;

    for (int i = 0; i < 100 ; i ++)
        b1.brain->ideas[i] = std::to_string(i);
    Cat b2;

    b2 = b1;
    for (int i = 0; i < 100; i++)
    {
        std::cout<<b1.brain->ideas[i]<<"***"<<b1.brain->ideas[i]<<"    "<<&b1.brain->ideas[i]<<"----"<<&b2.brain->ideas[i]<<std::endl;
    }
    // Animal  **ptr;
    // int     n = 4;

    // ptr = new Animal*[n];
    // for (int i = 0; i < n; i++)
    // {
    //     if (i < n / 2)
    //         ptr[i] = new Dog();
    //     else
    //         ptr[i] = new Cat();
    //     std::cout<<std::endl;
    // }
    // std::cout<<"-------------------"<<std::endl;
    // for (int i = 0; i < n; i++)
    //     ptr[i]->makeSound();
    return 0;
}