/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:24:56 by hel-haia          #+#    #+#             */
/*   Updated: 2024/03/30 19:51:12 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; av[i]; i++){
        std::string str(av[i]);
        for (size_t j=0; j < str.length(); j++)
            str[j] = std::toupper(str[j]);
        std::cout << str;
    }
    std::cout << std::endl;
}