/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:59:17 by hel-haia          #+#    #+#             */
/*   Updated: 2024/04/01 01:33:36 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone;
        std::string darksecret;

    public:
        void setfirstname(std::string _name);
        void setlastname(std::string _lastname);
        void setnickname(std::string _nickname);
        void setphone(std::string _phone);
        void setdarksecret(std::string _darksecret);

        std::string getfirstname();
        std::string getlastname();
        std::string getnickname();
        std::string getphone();
        std::string getdarksecret();
};