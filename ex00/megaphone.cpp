/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:50:37 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/03 17:33:35 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int	main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i;
        int j;
        
        i = 1;
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] -= 32;
                std::cout << av[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
    { 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}
