/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:03:32 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/25 19:01:14 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"




Contact::Contact()
{  
    
}

void  Contact::askForInput(const std::string& prompt, std::string& field) 
{
    std::cout << prompt;
    std::getline(std::cin, field);
    if (field.empty()) 
    {
        std::cout << "that field must not be empty. please try.\n";
        askForInput(prompt, field);
    }
}

void Contact::setContact() 
{
    askForInput("First Name: ", firstName);
    askForInput("Last Name: ", lastName);
    askForInput("Nickname: ", nickname);
    askForInput("Phone Number: ", phoneNumber);
    askForInput("Darkest Secret: ", darkestSecret);
}


void Contact::displayFull()const 
{
    std::cout << "FirstName: " << firstName << std::endl;
    std::cout << "LastName: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::displaySummary(int index) const 
{
    std::cout << "|" << std::setw(10) << index;

    if (firstName.length() > 10)
        std::cout << "|" << firstName.substr(0, 9) << ".";
    else
        std::cout << "|" << std::setw(10) << firstName;

    if (lastName.length() > 10)
        std::cout << "|" << lastName.substr(0, 9) << ".";
    else
        std::cout << "|" << std::setw(10) << lastName;

    if (nickname.length() > 10)
        std::cout << "|" << nickname.substr(0, 9) << ".";
    else
        std::cout << "|" << std::setw(10) << nickname;

    std::cout << "|" << std::endl;
}


Contact::~Contact(void)
{
    std::cout << "destructor called"<< std::endl;
}