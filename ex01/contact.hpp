/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:06:13 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/09 10:38:37 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string.h>
#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string formatField(std::string str) const;
		std::string getValidInput(std::string prompt, bool digitsOnly = false, bool letterOnly = false);
	public:
		Contact();
		void setContact();
		void displayShort(int index) const;
		void displayFull() const;

};

#endif