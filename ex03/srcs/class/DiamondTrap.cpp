/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:25:42 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 18:00:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/DiamondTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

DiamondTrap::DiamondTrap(std::string const &name) :
	ClapTrap(
		name + std::string("_clap_name"),
		DiamondTrap::_defaultHitPoints,
		DiamondTrap::_defaultEnergyPoints,
		DiamondTrap::_defaultAttackDamages),
	ScavTrap(),
	FragTrap(),
	_name(name)
{
	if (DEBUG)
		std::cout
		<< "Creating DiamondTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
	ClapTrap(
		src._name + std::string("_clap_name"),
		src._hitPoints,
		src._energyPoints,
		src._attackDamages),
	ScavTrap(),
	FragTrap(),
	_name(src._name)
{
	if (DEBUG)
		std::cout
		<< "Creating DiamondTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

DiamondTrap::~DiamondTrap(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying DiamondTrap "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&DiamondTrap::getName(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling DiamondTrap::getName()"
		<< std::endl;
	return this->_name;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	DiamondTrap::whoAmI(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling DiamondTrap::whoAmI()"
		<< std::endl;
	std::cout
	<< "DiamondTrap: 'Who am I?... OH YES I REMEMBER! My ClapTrap name is "
	<< this->ClapTrap::_name
	<< " and my DiamondTrap name is "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling DiamondTrap::operator=()"
		<< std::endl;
	if (this != &rhs)
	{
		this->ScavTrap::operator=(rhs);
		this->FragTrap::operator=(rhs);
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &rhs)
{
	o << "DiamondTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamage: " << rhs.getAttackDamages() << std::endl;
	return o;
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

std::string const	DiamondTrap::_defaultName("defaultName");
uint const			DiamondTrap::_defaultHitPoints(FragTrap::_defaultHitPoints);
uint const			DiamondTrap::_defaultEnergyPoints(ScavTrap::_defaultEnergyPoints);
uint const			DiamondTrap::_defaultAttackDamages(FragTrap::_defaultAttackDamages);
