/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:13:01 by cwolf             #+#    #+#             */
/*   Updated: 2025/06/26 18:24:36 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

std::string Contact::formatField(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool Contact::isLetter(char c)
{
    return std::isalpha(static_cast<unsigned char>(c));
}

std::string Contact::getValidInput(const std::string& prompt, bool digitsOnly, bool letterOnly)
{
    std::string input;
    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);

        if (input.empty())
            continue;

        if (letterOnly && !std::all_of(input.begin(), input.end(), isLetter))
        {
            std::cout << "Only letters allowed.\n";
            continue;
        }
        
        if (digitsOnly && !std::all_of(input.begin(), input.end(), ::isdigit))
        {
            std::cout << "Only digits allowed.\n";
            continue;
        }

        return input;
    }
}

void Contact::setContact() 
{
    firstName     = getValidInput("First Name: ", false, true);
    lastName      = getValidInput("Last Name: ", false, true);
    nickname      = getValidInput("Nickname: ");
    phoneNumber   = getValidInput("Phone Number: ", true);
    darkestSecret = getValidInput("Darkest Secret: ");
}

void Contact::displayShort(int index) const 
{
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << formatField(firstName) << "|"
              << std::setw(10) << formatField(lastName) << "|"
              << std::setw(10) << formatField(nickname) << std::endl;
}

void Contact::displayFull() const 
{
    std::cout << "First Name: "     << firstName     << std::endl;
    std::cout << "Last Name: "      << lastName      << std::endl;
    std::cout << "Nickname: "       << nickname      << std::endl;
    std::cout << "Phone Number: "   << phoneNumber   << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
