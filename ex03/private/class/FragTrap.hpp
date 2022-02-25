/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:12:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 10:02:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class FragTrap : virtual public ClapTrap
{
protected:
	// Attributes
	static std::string const	_defaultName;
	static uint const	_defaultHitPoints;
	static uint const	_defaultEnergyPoints;
	static uint const	_defaultAttackDamages;

public:
	// Constructors
	FragTrap(std::string const &name = FragTrap::_defaultName);
	FragTrap(FragTrap const &src);

	// Destructors
	virtual ~FragTrap(void);

	// Member functions
	void	highFivesGuys(void) const;

	// Operators
	FragTrap	&operator=(FragTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &rhs);

#endif
