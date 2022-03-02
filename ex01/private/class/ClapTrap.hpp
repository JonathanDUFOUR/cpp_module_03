/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:49 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 18:01:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

typedef unsigned int uint;

class ClapTrap
{
private:
	// Attributes
	static std::string const	_defaultName;
	static uint const			_defaultHitPoints;
	static uint const			_defaultEnergyPoints;
	static uint const			_defaultAttackDamages;

protected:
	// Attributes
	std::string		_name;
	uint			_hitPoints;
	uint			_energyPoints;
	uint			_attackDamages;

	// Constructors
	ClapTrap(
		std::string const &name,
		uint const hitPoints,
		uint const energyPoints,
		uint const attackDamages);

public:
	// Constructors
	ClapTrap(std::string const &name = ClapTrap::_defaultName);
	ClapTrap(ClapTrap const &src);

	// Destructors
	virtual ~ClapTrap(void);

	// Accessors
	std::string const	&getName(void) const;

	uint				getHitPoints(void) const;
	uint				getEnergyPoints(void) const;
	uint				getAttackDamages(void) const;

	// Member functions
	virtual void	attack(std::string const &target);
	void			beRepaired(uint const amount);
	void			takeDamage(uint const amount);

	// Operators
	ClapTrap	&operator=(ClapTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs);

#endif
