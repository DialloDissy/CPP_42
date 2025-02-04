/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:03:58 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/04 18:38:37 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdio.h>

PhoneBook::PhoneBook()
{
    std::cout << "constructor called" << std::endl;
    return;
}

void PhoneBook::ContactList(Contact *AddContact,int nbr)
{
    if( nbr < 7)
    {
       printf("-----------------------------------------------------------");
       std::cout << nbr << AddContact->firstname <<std::endl;     
    }
    return;
}









PhoneBook::~PhoneBook()
{
    std::cout << "constructor called" << std::endl;
    return;
}