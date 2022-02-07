/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:12:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 03:50:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

protected:

public:
	// Constructors
	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap(std::string const name);

	// Destructors
	virtual ~FragTrap(void);

	// Member functions
	void	highFivesGuys(void) const;

	// Operators
	FragTrap	&operator=(FragTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &rhs);

#endif
