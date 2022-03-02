/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:13:39 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 18:00:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/FragTrap.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

FragTrap::FragTrap(std::string const &name) :
	ClapTrap(
		name,
		FragTrap::_defaultHitPoints,
		FragTrap::_defaultEnergyPoints,
		FragTrap::_defaultAttackDamages)
{
	if (DEBUG)
		std::cout
		<< "Creating FragTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

FragTrap::FragTrap(FragTrap const &src) :
	ClapTrap(
		src._name,
		src._hitPoints,
		src._energyPoints,
		src._attackDamages)
{
	if (DEBUG)
		std::cout
		<< "Creating FragTrap "
		<< this->_name
		<< " (" << this->_hitPoints << ")"
		<< " (" << this->_energyPoints << ")"
		<< " (" << this->_attackDamages << ")"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

FragTrap::~FragTrap(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying FragTrap "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	FragTrap::highFivesGuys(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling FragTrap::highFivesGuys()"
		<< std::endl;
	std::cout
	<< "FragTrap "
	<< this->_name
	<< " is making a High Five ! _^o^/"
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling FragTrap::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &rhs)
{
	o << "FragTrap:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "hitPoints: " << rhs.getHitPoints() << std::endl
	<< "\t" "energyPoints: " << rhs.getEnergyPoints() << std::endl
	<< "\t" "attackDamage: " << rhs.getAttackDamages() << std::endl;
	return o;
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

std::string const	FragTrap::_defaultName("defaultName");
uint const			FragTrap::_defaultHitPoints(100);
uint const			FragTrap::_defaultEnergyPoints(100);
uint const			FragTrap::_defaultAttackDamages(30);
