/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:25:42 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/27 18:51:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

DiamondTrap::DiamondTrap(void) :
	ClapTrap(std::string("default" + std::string("_clap_name"))),
	ScavTrap(std::string("default" + std::string("_clap_name"))),
	FragTrap(std::string("default" + std::string("_clap_name"))),
	_name(std::string("default"))
{
	std::cout
	<< "Building DiamondTrap "
	<< this->_name
	<< std::endl;
	this->_hitPoints = FragTrap().getHitPoints();
	this->_energyPoints = ScavTrap().getEnergyPoints();
	this->_attackDamage = FragTrap().getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
	ClapTrap(src._name + std::string("_clap_name")),
	ScavTrap(src._name + std::string("_clap_name")),
	FragTrap(src._name + std::string("_clap_name")),
	_name(src._name)
{
	std::cout
	<< "Building DiamondTrap "
	<< this->_name
	<< std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string const name) :
	ClapTrap(name + std::string("_clap_name")),
	ScavTrap(name + std::string("_clap_name")),
	FragTrap(name + std::string("_clap_name")),
	_name(name)
{
	std::cout
	<< "Building DiamondTrap "
	<< this->_name
	<< std::endl;
	this->_hitPoints = FragTrap().getHitPoints();
	this->_energyPoints = ScavTrap().getEnergyPoints();
	this->_attackDamage = FragTrap().getAttackDamage();
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

DiamondTrap::~DiamondTrap(void)
{
	std::cout
	<< "Disassembling DiamondTrap "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string	DiamondTrap::getName(void) const
{
	return this->_name;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	DiamondTrap::whoAmI(void) const
{
	std::cout
	<< "DiamondTrap: 'Who am I?... OH YES I REMEMBER! My ClapTrap name is "
	<< this->ClapTrap::_name
	<< " and my DiamondTrap name is "
	<< this->_name
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
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

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &rhs)
{
	o << "DiamondTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamage: " << rhs.getAttackDamage() << std::endl;
	return o;
}
