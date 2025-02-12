/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:03:32 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/12 18:19:55 by sidiallo         ###   ########.fr       */
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
    std::cout << "Darkest Secret: ";
    std::cin >> this->darkest_secret;
    
}




Contact::~Contact(void)
{
    std::cout << "destructor called"<< std::endl;
}