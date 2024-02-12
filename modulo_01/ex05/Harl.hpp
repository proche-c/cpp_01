/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_REPLACE_HPP
# define FILE_REPLACE_HPP

#include <string>
#include <sstream>

class fileReplace
{
	public:
		int					fileExists;

		fileReplace(std::string fileName, std::string s1, std::string s2);
		~fileReplace(void);
		void	swapStrings(void);
		void	createReplaced(void);

	private:
		std::string			_fileName;
		std::string			_s1;
		std::string			_s2;
		std::stringstream	_content;
		std::string			_stringContent;

};
#endif