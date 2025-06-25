/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:49:21 by cwolf             #+#    #+#             */
/*   Updated: 2025/06/25 11:11:24 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int i;
	int	j;

	j = 0;
	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		i++;
	}
    std::cout << std::endl;
    return 0;
}