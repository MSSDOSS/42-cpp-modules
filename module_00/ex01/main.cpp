/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:52:16 by hel-haia          #+#    #+#             */
/*   Updated: 2024/04/03 14:02:27 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    Phonebook obj;
    std::string cmd;

    while(true)
    {
        if (std::cin.eof())
            break;
        std::cout << "Enter command: ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            break;
        if (cmd == "ADD")
            obj.addcontact();
        else if (cmd == "SEARCH")
            obj.search();
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "you can insert: ADD, SEARCH or EXIT\n";
    }
}