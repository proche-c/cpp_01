/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl has been created" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Harl has been destroyed" << std::endl;
	return ;
}

void    Harl::complain( std::string level )
{
	void		(Harl::*fComplain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*fComplain[i])();
			break ;
		}
		i++;
	}
	return ;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
