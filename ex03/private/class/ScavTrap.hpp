/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 17:58:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class ScavTrap : virtual public ClapTrap
{
protected:
	// Attributes
	bool	_activeMode;

	static std::string const	_defaultName;
	static uint const			_defaultHitPoints;
	static uint const			_defaultEnergyPoints;
	static uint const			_defaultAttackDamages;

public:
	// Constructors
	ScavTrap(std::string const &name = ScavTrap::_defaultName);
	ScavTrap(ScavTrap const &src);

	// Destructors
	virtual ~ScavTrap(void);

	// Member functions
	virtual void	attack(std::string const &target);
	void			guardGate(void);

	// Operators
	ScavTrap	&operator=(ScavTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs);

#endif
