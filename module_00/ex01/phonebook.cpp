/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 01:59:36 by hel-haia          #+#    #+#             */
/*   Updated: 2024/04/03 13:56:07 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool tab(std::string c)
{
    for (unsigned long i = 0; i < c.length(); i++)
    {
	    if (c[i] == '\t')
            return (false);
    }
    return (true);
}

void Phonebook::addcontact()
{
    std::string str;
    Contact obj1;

/*--------------------------------- first name -------------------------*/
    std::string c = "";
    while (c == "")
    {
        if (std::cin.eof())
            return ; 
        std::cout << "enter the firstname: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        obj1.setfirstname(str);
        c = str;
        if (!tab(c))
        {
			c = "";
            std::cout << "!! INVALID INPUT !!\n";
        }
    }
/*--------------------------------- last name --------------------------*/
    c = "";
    while (c == "")
    {
        if (std::cin.eof())
            return ;
        std::cout << "enter the lastname: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        obj1.setlastname(str);
        c = str;
        if (!tab(c))
        {
			c = "";
            std::cout << "!! INVALID INPUT !!\n";
        }
    }
/*---------------------------------- nick name -------------------------*/
    //nickname
    c = "";
    while (c == "")
    {
        if (std::cin.eof())
            return ;
        std::cout << "enter the nickname: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        obj1.setnickname(str);
        c = str;
        if (!tab(c))
        {
			c = "";
            std::cout << "!! INVALID INPUT !!\n";
        }
    }
/*------------------------------------ phone ---------------------------*/
    c = "";
    while (c == "")
    {
        if (std::cin.eof())
            return ;
        std::cout << "enter the phone: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        obj1.setphone(str);
        c = str;
        if (!tab(c))
        {
			c = "";
            std::cout << "!! INVALID INPUT !!\n";
        }
    }
/*--------------------------------- dark secret ------------------------*/
     // darecsecr
    c = "";
    while (c == "")
    {
        if (std::cin.eof())
            return ;
        std::cout << "enter the darksecret: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        obj1.setdarksecret(str);
        c = str;
        if (!tab(c))
        {
			c = "";
            std::cout << "!! INVALID INPUT !!\n";
        }
    }
/*======================================================================*/
    this->array[index % 8] = obj1;
    index++;
}

#include <sstream>

void    Phonebook::search()
{
    int a;
    a = index;
    if (index >= 8)
        a = 8;
    if (a == 0)
    {
        std::cout << "!! empty phonebook !!" << std::endl;
        return ;
    }
    std::cout << " ___________________________________________\n";
    std::cout << "|     index|first name| last name|  nickname|\n";
    std::cout << "|-------------------------------------------|\n";
    int i = 0;
    while (i < a) // 0 < 8
    {
        std::cout <<"|" << std::setw(10) << i + 1;
        if(array[i].getfirstname().length() > 10)
            std::cout << "|" << std::setw(9) << array[i].getfirstname().substr(0, 9) << ".";
        else
            std::cout <<"|" << std::setw(10) << std::setw(10) << array[i].getfirstname();
        if(array[i].getlastname().length() > 10)
            std::cout << "|" << std::setw(9) << array[i].getlastname().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) <<array[i].getlastname();
        if(array[i].getnickname().length() > 10)
            std::cout << "|" << std::setw(9) << array[i].getnickname().substr(0, 9) << "." << "|";
        else
            std::cout << "|" << std::setw(10) <<array[i].getnickname() << "|";
        std::cout << "\n|__________|__________|__________|__________|\n";
        i++;
    }
    std::cout << "please enter index of the entry: ";
    std::string str;
    std::getline(std::cin, str);
    if (std::cin.eof())
        return ;
    std::stringstream ss(str);//G 
    ss >> a;//0
    a--;
    if (!str.empty() && a >= 0 && a <= i-1 && a <= 8)
    {
        std::cout << "####\n";
            std::cout << " the first name is: "<< array[a].getfirstname() << std::endl;
        std::cout << "  the last name is: "<< array[a].getlastname() << std::endl;
        std::cout << "  the nick name is: "<< array[a].getnickname() << std::endl;
        std::cout << "      the phone is: "<< array[a].getphone() << std::endl;
        std::cout << "the dark secret is: "<< array[a].getdarksecret() << std::endl;
        std::cout << "####\n";
    }
    else
    {
        std::cout << "###########################\n";
        std::cout << "error: index out of range!!\n";
        std::cout << "###########################\n";
    }
}