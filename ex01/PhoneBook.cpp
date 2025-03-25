/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:03:58 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/25 18:53:43 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdio.h>
#include <iomanip>

PhoneBook::PhoneBook(): totalContacts(0)
{
    std::cout << "constructor called" << std::endl;
    return;
}

void PhoneBook::addContact() 
{
    int index = totalContacts % 8;
    std::cout << "Adding new contact at index " << index << std::endl;
    contacts[index].setContact();
    totalContacts++;
}

void PhoneBook::searchContacts() 
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < std::min(totalContacts, 8); ++i)
        contacts[i].displaySummary(i);
    std::cout << "Enter index to view details: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() == 1 && isdigit(input[0])) {
        int index = input[0] - '0'; //convertion en int 
        if (index >= 0 && index < std::min(totalContacts, 8)) // choisi le plus petit int 
            contacts[index].displayFull();
        else
            std::cout << "Invalid index!" << std::endl;
    } else {
        std::cout << "Invalid input!" << std::endl;
    }
}

PhoneBook::~PhoneBook()
{
    std::cout << "destructor called" << std::endl;
    return;
}