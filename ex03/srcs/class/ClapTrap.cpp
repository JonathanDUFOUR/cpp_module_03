/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:39 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:15:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ClapTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ClapTrap::ClapTrap(void) :
	_name("default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
	<< "Building ClapTrap "
	<< this->_name
	<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout
	<< "Building ClapTrap "
	<< this->_name
	<< std::endl;
}

ClapTrap::ClapTrap(std::string const name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
	<< "Building ClapTrap "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ClapTrap::~ClapTrap(void)
{
	std::cout
	<< "Disassembling ClapTrap "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

void	ClapTrap::setName(std::string const name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int const amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int const amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int const amount)
{
	this->_attackDamage = amount;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	ClapTrap::attack(std::string const &target)
{
	std::cout
	<< "ClapTrap "
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

void	ClapTrap::beRepaired(unsigned int const amount)
{
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

void	ClapTrap::takeDamage(unsigned int const amount)
{
	std::cout
	<< "ClapTrap "
	<< this->_name
	<< " takes "
	<< amount
	<< " damages"
	<< std::endl;
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs)
{
	o
	<< "ClapTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamage: " << rhs.getAttackDamage() << std::endl;
	return o;
}
