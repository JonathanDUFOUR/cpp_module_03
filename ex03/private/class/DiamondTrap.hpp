/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:54 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 10:02:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	// Attributes
	std::string	_name;

	static std::string const	_defaultName;
	static uint const	_defaultHitPoints;
	static uint const	_defaultEnergyPoints;
	static uint const	_defaultAttackDamages;

public:
	// Constructors
	DiamondTrap(std::string const &name = DiamondTrap::_defaultName);
	DiamondTrap(DiamondTrap const &src);

	// Destructors
	virtual ~DiamondTrap(void);

	// Accessors
	std::string const	&getName(void) const;

	// Member functions
	void	whoAmI(void) const;

	// Operators
	DiamondTrap	&operator=(DiamondTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &rhs);

#endif
