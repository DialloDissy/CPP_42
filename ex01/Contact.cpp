/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:03:32 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/04 18:29:51 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
 #include <stdlib.h>



// Contact::Contact(std::string first,std::string last,std::string nick,int num,std::string dark,int i)
// {
//     std::cout << "constructor called : "<< i<< std::endl;
//     this->firstname = first;
//     this->lastname = last;
//     this->nickname = nick;
//     this->phone_number = num;
//     this->darkest_secret = dark
    
// }

Contact::Contact()
{
//     std::cout << "constructor called : "<< nbr<< std::endl;
//     std::cout << "Add a new contact : "<< nbr<< std::endl;
    std::cout << "Firstname: ";
    std::cin >> this->firstname;
    std::cout << "Lastname: ";
    std::cin >> this->lastname;
    std::cout << "Nickname: ";
    std::cin >> this->nickname;
    std::cout << "Phone_Number: ";
    std::cin >> this->phone_number;
    // if (std::cin.fail()) 
    //     {
    //         std::cin.clear();                 // Réinitialise l'état d'erreur
    //         std::cin.ignore(10000, '\n');     // Vide le buffer jusqu'à la fin de la ligne
    //         std::cerr << "Erreur de saisie num." << std::endl;
    //         exit(42);
    //     }
    
    std::cout << "Darkest Secret: ";
    std::cin >> this->darkest_secret;
    
}




Contact::~Contact(void)
{
    std::cout << "destructor called"<< std::endl;
}