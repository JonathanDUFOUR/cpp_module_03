/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:22:30 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:03:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ScavTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ScavTrap::ScavTrap(std::string const &name) :
	ClapTrap(
		name,
		ScavTrap::_defaultHitPoints,
		ScavTrap::_defaultEnergyPoints,
		ScavTrap::_defaultAttackDamages),
	_activeMode(false)
{
	if (DEBUG)
		std::cout
		<< std::boolalpha
		<< "Creating ScavTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< " (" << this->_activeMode << ")"
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) :
	ClapTrap(
		src._name,
		src._hitPoints,
		src._energyPoints,
		src._attackDamages)
{
	if (DEBUG)
		std::cout
		<< std::boolalpha
		<< "Creating ScavTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< " (" << this->_activeMode << ")"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ScavTrap::~ScavTrap(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying ScavTrap "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	ScavTrap::attack(std::string const &target)
{
	if (DEBUG)
		std::cout
		<< "Calling ScavTrap::attack()"
		<< std::endl;
	std::cout
	<< "ScavTrap "
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

void	ScavTrap::guardGate(void)
{
	if (DEBUG)
		std::cout
		<< "Calling ScavTrap::guardGate()"
		<< std::endl;
	std::cout
	<< "ScavTrap "
	<< this->_name;
	if (!this->_activeMode)
		std::cout
		<< " enters ";
	else
		std::cout
		<< " leaves ";
	std::cout
	<< "Gate keeper mode"
	<< std::endl;
	this->_activeMode ^= true;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling ScavTrap::operator=()"
		<< std::endl;
	if (this != &rhs)
	{
		this->ClapTrap::operator=(rhs);
		this->_activeMode = rhs._activeMode;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs)
{
	o << "ScavTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamages: " << rhs.getAttackDamages() << std::endl;
	return o;
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

std::string const	ScavTrap::_defaultName("defaultName");
uint const			ScavTrap::_defaultHitPoints(100U);
uint const			ScavTrap::_defaultEnergyPoints(50U);
uint const			ScavTrap::_defaultAttackDamages(20U);
