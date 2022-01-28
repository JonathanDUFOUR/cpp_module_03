/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/27 19:02:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	_activeMode;

protected:

public:
	// Constructors
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string const name);

	// Destructors
	virtual ~ScavTrap(void);

	// Member functions
	void	attack(std::string const &target);
	void	guardGate(void);

	// Operator overloads
	ScavTrap	&operator=(ScavTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs);

#endif
