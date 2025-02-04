/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:53:46 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/04 18:38:27 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    // private :
    
    //     std::string firstname;
    //     std::string lastname;
    //     std::string nickname;
    //     std::string phone_number;
    //     std::string darkest_secret;
        
    public:
        
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        // Contact(std::string first,std::string last,std::string nick,int num,std::string dark,int i);
        Contact();
        ~Contact(void);
};


#endif