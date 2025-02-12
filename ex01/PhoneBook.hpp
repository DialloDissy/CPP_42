/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:53:43 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/12 18:17:02 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[7];
    public:
        PhoneBook(void);
        
        void ContactList(Contact *AddContact,int nbr);
        ~PhoneBook(void);
};


#endif