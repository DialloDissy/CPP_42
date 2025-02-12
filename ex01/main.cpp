/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:51:14 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/12 15:30:12 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include"PhoneBook.hpp"
#include <iostream>
#include <string.h>
#include<stdio.h>



// void check_in_contact(int i)
// {
//     std::string first;
//     std::string last;
//     std::string nick;
//     int num;
//     std::string dark;


//     std::cout << "Add a new contact : "<< i<< std::endl;
//     std::cout << "Firstname: ";
//     std::cin >> first;
//     std::cout << "Lastname: ";
//     std::cin >> last;
//     std::cout << "Nickname: ";
//     std::cin >> nick;
//     std::cout << "Phone_Number: ";
//     std::cin >> num;
//     std::cout << "Darkest Secret: ";
//     std::cin >> dark;    
//     Contact add_contact(first,last,nick,num,dark,i);
// }




int main()
{
    int nbr;
    
    nbr = 0;
    while(1)
    {
        std::string command ;
        std::cout << "Entrez une commande: ";
        std::cin >> command;
        if (std::cin.fail()) 
        {
            std::cin.clear();                 // Réinitialise l'état d'erreur
            std::cin.ignore(10000, '\n');     // Vide le buffer jusqu'à la fin de la ligne
            std::cerr << "Erreur de saisie. Réessayez." << std::endl;
            continue;                         // Recommence la boucle
        }
        if(command == "ADD")
        {
        //   check_in_contact(i);
        }    
            nbr++;
            
        else if(command == "SEARCH")
            printf("success SEARCH\n");
        else if(command == "EXIT")
        {
            printf("success EXIT\n");
            return(0);
        }
            
    }
    return(0);
}