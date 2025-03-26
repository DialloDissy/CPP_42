/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:51:14 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/26 16:00:18 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include"PhoneBook.hpp"
#include <iostream>
#include <string.h>
#include<stdio.h>

int main() 
{
    PhoneBook phoneBook;
    std::string command;

    while (1) 
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cout << "I/O error while reading\n";
            break;   
        }
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContacts();
        else if (command == "EXIT") 
        {
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
            break;
        } 
        else 
            std::cout << "Unknown command!" << std::endl;
    }


    return 0;
}
