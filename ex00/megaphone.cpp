/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:57:18 by drabarza          #+#    #+#             */
/*   Updated: 2024/12/20 14:30:58 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char **argv)
{
	int j;
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	j = 1;
	while (j < argc)
	{
		i = 0;
		while(argv[j][i])
		{
			if (islower(argv[j][i]))
				argv[j][i] -= 32;
			std::cout << argv[j][i];
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}