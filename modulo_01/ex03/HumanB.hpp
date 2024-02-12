/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB	{

public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon(Weapon &weapon);

private:

	std::string	_name;
	Weapon *_weapon;
};

#endif
