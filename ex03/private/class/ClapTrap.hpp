/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:49 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 03:50:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	// Constructors
	ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	ClapTrap(std::string const name);

	// Destructors
	virtual ~ClapTrap(void);

	// Accessors
	std::string		getName(void) const;

	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

	void			setName(std::string const name);
	void			setHitPoints(unsigned int const amount);
	void			setEnergyPoints(unsigned int const amount);
	void			setAttackDamage(unsigned int const amount);

	// Member functions
	void	attack(std::string const &target);
	void	beRepaired(unsigned int const amount);
	void	takeDamage(unsigned int const amount);

	// Operators
	ClapTrap	&operator=(ClapTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs);

#endif
