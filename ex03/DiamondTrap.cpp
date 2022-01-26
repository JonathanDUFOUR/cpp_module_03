/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:25:42 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/26 17:00:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

DiamondTrap::DiamondTrap(void) :
	ScavTrap("default"),
	FragTrap("default"),
	_name("default")
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
	ScavTrap(src._name),
	FragTrap(src._name),
	ClapTrap(src._name),
	_name(src._name)
{
	std::cout
	<< "Building DiamondTrap "
	<< this->_name
	<< std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string const name) :
	ScavTrap(name),
	FragTrap(name),
	ClapTrap(name),
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
