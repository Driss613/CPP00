/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:57:18 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/24 13:56:03 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main (int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; argv[j][i]; i++)
		{
			if (std::isalpha(argv[j][i]))
				std::cout << (char)(std::toupper(argv[j][i]));
			else
				std::cout << argv[j][i];
		}
	}
	std::cout << std::endl;
	return (0);
}