/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:10 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 00:43:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <climits>
#include "class/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct("C3PO");
	int			i;

	std::cout << ct << std::endl;

	ct = ClapTrap("R2D2");

	std::cout << ct << std::endl;

	for (i = 0 ; i < 15 ; ++i)
	{
		ct.attack("Dark Vader");
		ct.beRepaired(1);
	}

	std::cout << ct << std::endl;

	ct.takeDamage(42);
	ct.attack("Dark Vader");
	ct.beRepaired(101010);

	std::cout << ct << std::endl;

	return EXIT_SUCCESS;
}
