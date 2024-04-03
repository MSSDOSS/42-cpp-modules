/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 06:29:54 by hel-haia          #+#    #+#             */
/*   Updated: 2024/04/02 06:29:55 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setfirstname(std::string _name)
{
    firstname = _name;
}
void Contact::setlastname(std::string _lastname)
{
    lastname = _lastname;
}
void Contact::setnickname(std::string _nickname)
{
    nickname = _nickname;
}
void Contact::setphone(std::string _phone)
{
    phone = _phone;
}
void Contact::setdarksecret(std::string _darksecret)
{
    darksecret = _darksecret;
}

std::string Contact::getfirstname()
{
    return(firstname);
}
std::string Contact::getlastname()
{
    return(lastname);
}
std::string Contact::getnickname()
{
    return(nickname);
}
std::string Contact::getphone()
{
    return(phone);
}
std::string Contact::getdarksecret()
{
    return(darksecret);
}