/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:54 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/26 16:44:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;

protected:

public:
	// Constructors
	DiamondTrap(void);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap(std::string const name);

	// Destructors
	virtual ~DiamondTrap(void);

	// Accessors

	// Operator overloads
	DiamondTrap	&operator=(DiamondTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &rhs);

#endif
