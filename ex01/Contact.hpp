/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:53:46 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/25 19:19:56 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip> 

class Contact
{
    public:
        Contact();
        void setContact();
        void displaySummary(int index) const;
        void displayFull() const;
        ~Contact(void);
        
    private :
        void askForInput(const std::string& prompt, std::string& field);
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    
        
};


#endif