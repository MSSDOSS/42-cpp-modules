/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:52:09 by hel-haia          #+#    #+#             */
/*   Updated: 2024/04/01 00:38:39 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
    private:
        int index;//0
        Contact array[8];
    public:
        Phonebook(){index = 0;}
        ~Phonebook(){}

        void addcontact();
        void search();
};

