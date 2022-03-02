/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:39 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:04:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ClapTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ClapTrap::ClapTrap(std::string const &name) :
	_name(name),
	_hitPoints(ClapTrap::_defaultHitPoints),
	_energyPoints(ClapTrap::_defaultEnergyPoints),
	_attackDamages(ClapTrap::_defaultAttackDamages)
{
	if (DEBUG)
		std::cout
		<< "Creating ClapTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) :
	_name(src._name),
	_hitPoints(src._hitPoints),
	_energyPoints(src._energyPoints),
	_attackDamages(src._attackDamages)
{
	if (DEBUG)
		std::cout
		<< "Creating ClapTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

ClapTrap::ClapTrap(
	std::string const &name,
	uint const hitPoints,
	uint const energyPoints,
	uint const attackDamages) :
	_name(name),
	_hitPoints(hitPoints),
	_energyPoints(energyPoints),
	_attackDamages(attackDamages)
{
	if (DEBUG)
		std::cout
		<< "Creating ClapTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ClapTrap::~ClapTrap(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying ClapTrap "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&ClapTrap::getName(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::getName()"
		<< std::endl;
	return this->_name;
}

uint	ClapTrap::getHitPoints(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::getHitPoints()"
		<< std::endl;
	return this->_hitPoints;
}

uint	ClapTrap::getEnergyPoints(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::getEnergyPoints()"
		<< std::endl;
	return this->_energyPoints;
}

uint	ClapTrap::getAttackDamages(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::getAttackDamages()"
		<< std::endl;
	return this->_attackDamages;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	ClapTrap::attack(std::string const &target)
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::attack()"
		<< std::endl;
	std::cout
	<< "ClapTrap "
	<< this->_name;
	if (this->_hitPoints && this->_energyPoints)
		std::cout
		<< " deals "
		<< this->_attackDamages
		<< " damages to ";
	else if (!this->_hitPoints)
		std::cout
		<< " hasn't enough hit points to attack ";
	else
		std::cout
		<< " hasn't enough energy points to attack ";
	std::cout
	<< target
	<< std::endl;
	this->_energyPoints -= !!this->_energyPoints;
}

void	ClapTrap::beRepaired(uint const amount)
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::beRepaired()"
		<< std::endl;
	std::cout
	<< "ClapTrap "
	<< this->_name;
	if (this->_hitPoints && this->_energyPoints)
	{
		std::cout
		<< " repairs itself for an amount of "
		<< amount;
		this->_hitPoints += amount;
	}
	else if (!this->_hitPoints)
		std::cout
		<< " hasn't enough hit points to repair itself";
	else
		std::cout
		<< " hasn't enough energy points to repair itself";
	std::cout << std::endl;
	this->_energyPoints -= !!this->_energyPoints;
}

void	ClapTrap::takeDamage(uint const amount)
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::takeDamage()"
		<< std::endl;
	std::cout
	<< "ClapTrap "
	<< this->_name;
	if (this->_hitPoints && this->_energyPoints)
	{
		std::cout
		<< " takes "
		<< amount
		<< " damages";
		if (this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
	else if (!this->_hitPoints)
		std::cout
		<< " hasn't enough hit points to take damages";
	else
		std::cout
		<< " hasn't enough energy points to take damages";
	std::cout << std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling ClapTrap::operator=()"
		<< std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamages = rhs._attackDamages;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs)
{
	o
	<< "ClapTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamages: " << rhs.getAttackDamages() << std::endl;
	return o;
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

std::string const	ClapTrap::_defaultName("defaultName");
uint const			ClapTrap::_defaultHitPoints(10U);
uint const			ClapTrap::_defaultEnergyPoints(10U);
uint const			ClapTrap::_defaultAttackDamages(0U);
