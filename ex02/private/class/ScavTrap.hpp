/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 18:33:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class ScavTrap : public ClapTrap
{
private:
	// Attributes
	bool	_activeMode;

	static std::string const	_defaultName;
	static unsigned int const	_defaultHitPoints;
	static unsigned int const	_defaultEnergyPoints;
	static unsigned int const	_defaultAttackDamages;

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
