/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:03:36 by cwolf             #+#    #+#             */
/*   Updated: 2025/06/25 15:03:21 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.hpp"
#include <iostream>
#include <limits>

Phonebook::Phonebook() : totalContacts(0), nextIndex(0) {}

void	Phonebook::addContact()
{
	contacts[nextIndex].setContact();
	
	if(totalContacts < 8)
		totalContacts++;
	
	nextIndex = (nextIndex + 1) % 8;
}

void	Phonebook::searchContacts() const
{
	if (totalContacts == 0)
	{
		std::cout << "Phonebook is empty.\n";
		return;
	}
	
	std::cout << "Index |First Name| Last Name| Nickname\n";
	for (int i = 0; i < totalContacts; ++i)
	{
		contacts[i].displayFull();
	}
	
	std::cout << "Enter index (0-" << totalContacts - 1 <<"): ";
	std::string input;
	std::getline(std::cin, input);

	if (input.length() == 1 && isdigit(input[0]))
	{
		int index = input[0] - '0';
		if (index >= 0 && index < totalContacts)
		{
			contacts[index].displayFull();
			return;
		}
	}
	
	std::cout << "Invalid index.\n";
}