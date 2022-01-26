/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/26 16:31:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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
	void	guardGate(void);

	// Operator overloads
	ScavTrap	&operator=(ScavTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs);

#endif
