/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:20:16 by cwolf             #+#    #+#             */
/*   Updated: 2025/06/26 11:10:16 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHINEBOOK_HPP
#define PHINEBOOK_HPP

#include "./Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int		totalContacts;
		int		nextIndex;

	public:
		Phonebook();
		void addContact();
		void searchContacts() const;
};

#endif