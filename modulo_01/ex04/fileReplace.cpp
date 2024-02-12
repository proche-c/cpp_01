/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "fileReplace.hpp"

fileReplace::fileReplace(std::string fileName, std::string s1, std::string s2):_fileName(fileName), _s1(s1), _s2(s2)
{
	std::ifstream	ifs(this->_fileName);

	if (ifs.is_open())
	{
		this->fileExists = 1;
		std::string	line;
		while (std::getline(ifs, line))
		{
			this->_content << line << std::endl;
		}
		this->_stringContent = this->_content.str();
		this->_stringContent.pop_back();
		ifs.close();
	}
	else
		this->fileExists = 0;
	return ;
}

fileReplace::~fileReplace(void)
{
	return ;
}

void	fileReplace::swapStrings()
{
	int	found = 0;
	int	pos = 0;

	if (this->_s1.length() > 0 && this->fileExists == 1)
	{
		while (found > -1 && pos < this->_stringContent.length())
		{
			found = this->_stringContent.find(this->_s1, pos);
			//std::cout << "encontrado en: " << found << std::endl;
			if (found > -1)
			{
				this->_stringContent.erase(found, this->_s1.length());
				this->_stringContent.insert(found, this->_s2);
			}
			pos = found + this->_s2.length() + 1;
		}
	}
	// else
	// 	std::cout << "Invalid swap" << std::endl;
	return ;
}

void	fileReplace::createReplaced()
{
	if (this->fileExists == 1)
	{
		std::string	fileReplaceName = this->_fileName + ".replace";
		std::ofstream	ofs(fileReplaceName);

		ofs << this->_stringContent;
		ofs.close();
	}
	return ;
}