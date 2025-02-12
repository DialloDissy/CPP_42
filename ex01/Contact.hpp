/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:53:46 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/12 18:26:41 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    public:
        Contact();
        void GetContact(std::string info)const;
        SetFirst()
        // Contact(std::string first,std::string last,std::string nick,int num,std::string dark,int i);
        ~Contact(void);
        
    private :  
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    
        
};


#endif