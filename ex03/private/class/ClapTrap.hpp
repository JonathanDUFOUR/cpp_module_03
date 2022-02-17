/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:49 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 18:34:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class ClapTrap
{
private:
	// Attributes
	static std::string const	_defaultName;
	static unsigned int const	_defaultHitPoints;
	static unsigned int const	_defaultEnergyPoints;
	static unsigned int const	_defaultAttackDamages;

protected:
	// Attributes
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamages;

	// Constructors
	ClapTrap(
		std::string const &name,
		unsigned int const hitPoints,
		unsigned int const energyPoints,
		unsigned int const attackDamages);

public:
	// Constructors
	ClapTrap(std::string const &name = ClapTrap::_defaultName);
	ClapTrap(ClapTrap const &src);

	// Destructors
	virtual ~ClapTrap(void);

	// Accessors
	std::string const	&getName(void) const;

	unsigned int		getHitPoints(void) const;
	unsigned int		getEnergyPoints(void) const;
	unsigned int		getAttackDamages(void) const;

	// Member functions
	virtual void	attack(std::string const &target);
	void			beRepaired(unsigned int const amount);
	void			takeDamage(unsigned int const amount);

	// Operators
	ClapTrap	&operator=(ClapTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs);

#endif
