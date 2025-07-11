/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:46:51 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/09 10:22:02 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

int main()
{
	Phonebook pb;
	std::string command;

	while(true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
		
		if (std::cin.eof())
		{
			std::cout << "\nInput ended (EOF detected).\n";
			exit(0);
		}
		if (command == "ADD")
			pb.addContact();
		else if (command == "SEARCH")
			pb.searchContacts();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Unknown command.\n";
	}
	return 0;
}