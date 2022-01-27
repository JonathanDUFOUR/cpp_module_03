/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:22:30 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/27 19:02:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ScavTrap::ScavTrap(void) :
	ClapTrap("default"),
	_activeMode(false)
{
	std::cout
	<< "Building ScavTrap "
	<< this->_name
	<< std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) :
	ClapTrap(src._name)
{
	std::cout
	<< "Building ScavTrap "
	<< this->_name
	<< std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string const name) :
	ClapTrap(name),
	_activeMode(false)
{
	std::cout
	<< "Building ScavTrap "
	<< this->_name
	<< std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ScavTrap::~ScavTrap(void)
{
	std::cout
	<< "Disassembling ScavTrap "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	ScavTrap::attack(std::string const &target)
{
	std::cout
	<< "ScavTrap "
	<< this->_name;
	if (this->_hitPoints && this->_energyPoints)
		std::cout
		<< " deals "
		<< this->_attackDamage
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

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
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
	<< "\t" "attackDamage: " << rhs.getAttackDamage() << std::endl;
	return o;
}
