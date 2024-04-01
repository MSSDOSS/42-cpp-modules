/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 01:59:36 by hel-haia          #+#    #+#             */
/*   Updated: 2024/04/01 19:02:07 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::addcontact()
{
    std::string str;
    Contact obj1;
    
    // std::cout << "enter the firstname: ";
    // std::getline(std::cin, str);
    // obj1.setfirstname(str);
/*--------------------------------- first name -------------------------*/
    std::string c = "";
    while (c == "")
    {
        std::cout << "enter the firstname: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break ; 
        obj1.setfirstname(str);
        c = str;
    }
/*--------------------------------- last name --------------------------*/
    c = "";
    while (c == "")
    {
        std::cout << "enter the lastname: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break ;
        obj1.setlastname(str);
        c = str;
    }
/*---------------------------------- nick name -------------------------*/
    //nickname
    c = "";
    while (c == "")
    {
        std::cout << "enter the nickname: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break ;
        obj1.setnickname(str);
        c = str;
    }
/*------------------------------------ phone ---------------------------*/
    c = "";
    while (c == "")
    {
        std::cout << "enter the phone: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break ;
        obj1.setphone(str);
        c = str;
    }
/*--------------------------------- dark secret ------------------------*/
     // darecsecr
    c = "";
    while (c == "")
    {
        std::cout << "enter the darksecret: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break ;
        obj1.setdarksecret(str);
        c = str;
    }
/*======================================================================*/
    this->array[index % 8] = obj1;
    index++;
}

void    Phonebook::search()
{
    int a;
    int b;
    a = index;
    if (index >= 8)
        a = 8;
    std::cout << " ___________________________________________\n";
    std::cout << "|     index|first name| last name|  nickname|\n";
    std::cout << "|-------------------------------------------|\n";
    int i = 0;
    
    while (i < a) // 0 < 8
    {
        // if (i == 8)
        // {
        //     std::cout << "break\n";
        //     break;
        // }
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
    std::cout << "please enter index of the entry :";
    std::cin >> a;
    a--;
    if (a >= 0 && a <= i)
    {
        std::cout << "####\n";
            std::cout << " the first name is: "<< array[a].getfirstname() << std::endl;
        std::cout << "  the last name is: "<< array[a].getlastname() << std::endl;
        std::cout << "  the nick name is: "<< array[a].getnickname() << std::endl;
        std::cout << "      the phone is: "<< array[a].getphone() << std::endl;
        std::cout << "the dark secret is: "<< array[a].getdarksecret() << std::endl;
        std::cout << "####\n";
    }
}



    // int a = index - 1;//9
    // int i = 0;
    // if (index > 7)
    //     a = 8;
    // else if (index < 7)
    //     a  = index; 