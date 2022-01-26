/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/26 13:16:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap
{
private:

protected:

public:
	// Constructors
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);

	// Destructors
	virtual ~ScavTrap(void);

	// Accessors

	// Operator Overloads
	ScavTrap	&operator=(ScavTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs);

#endif
