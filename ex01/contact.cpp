/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:13:01 by cwolf             #+#    #+#             */
/*   Updated: 2025/06/25 15:02:08 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

void Contact::setContact() 
{
    std::cout << "First Name: ";
    std::getline(std::cin, firstName);

    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);

    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
}

void Contact::displayShort(int index) const 
{
    auto format = [](std::string str) 
	{
        if (str.length() > 10)
            return str.substr(0, 9) + ".";
        return str;
    };

    std::cout << std::setw(10) << index << " | "
              << std::setw(10) << format(firstName) << " | "
              << std::setw(10) << format(lastName) << " | "
              << std::setw(10) << format(nickname) << std::endl;
}

void Contact::displayFull() const 
{
    std::cout << "First Name: "     << firstName     << std::endl;
    std::cout << "Last Name: "      << lastName      << std::endl;
    std::cout << "Nickname: "       << nickname      << std::endl;
    std::cout << "Phone Number: "   << phoneNumber   << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
