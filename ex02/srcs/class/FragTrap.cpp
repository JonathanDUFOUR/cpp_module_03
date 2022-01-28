/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:13:39 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 00:43:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/FragTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

FragTrap::FragTrap(void) :
	ClapTrap("default")
{
	std::cout
	<< "Building FragTrap "
	<< this->_name
	<< std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) :
	ClapTrap(src._name)
{
	std::cout
	<< "Building FragTrap "
	<< this->_name
	<< std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string const name) :
	ClapTrap(name)
{
	std::cout
	<< "Building FragTrap "
	<< this->_name
	<< std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

FragTrap::~FragTrap(void)
{
	std::cout
	<< "Disassembling FragTrap "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	FragTrap::highFivesGuys(void) const
{
	std::cout
	<< "FragTrap "
	<< this->_name
	<< " is making a High Five ! _^o^/"
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &rhs)
{
	o << "FragTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamage: " << rhs.getAttackDamage() << std::endl;
	return o;
}
