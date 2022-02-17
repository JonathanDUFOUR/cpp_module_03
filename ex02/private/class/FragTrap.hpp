/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:12:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 18:33:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class FragTrap : public ClapTrap
{
private:
	// Attributes
	static std::string const	_defaultName;
	static unsigned int const	_defaultHitPoints;
	static unsigned int const	_defaultEnergyPoints;
	static unsigned int const	_defaultAttackDamages;

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
