/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ):_weapon(NULL)
{
    this->_name = name;
    std::cout << "El humano " << this->_name << " ha sido creado." << std::endl;
    return ;
}

HumanB::~HumanB( void )
{
    std::cout << "El humano " << this->_name << " ha sido destruido." << std::endl;
    return ;
}

void    HumanB::attack( void ) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return ;
}