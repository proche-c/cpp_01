/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "fileReplace.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4 )
	{
		fileReplace		fr(argv[1], argv[2], argv[3]);
		if (fr.fileExists == 1)
		{
			fr.swapStrings();
			fr.createReplaced();
		}
		else
			std::cout << "File not found" << std::endl;
	}
	else
	{
		std::cout << "Invalid arguments" << std::endl;
	}

	return (0);
}