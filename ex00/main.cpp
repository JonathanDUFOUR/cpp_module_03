/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:00:10 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/26 13:10:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <climits>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct0("C3PO");
	ClapTrap	ct1("R2D2");

	std::cout << ct0 << std::endl;
	std::cout << ct1 << std::endl;

	ct0.beRepaired(42);
	ct1.takeDamage(6);

	std::cout << ct0 << std::endl;
	std::cout << ct1 << std::endl;

	ct0.beRepaired(21);
	ct1.takeDamage(5);

	std::cout << ct0 << std::endl;
	std::cout << ct1 << std::endl;

	ct1.beRepaired(UINT_MAX);
	ct1.attack("Black Shand");
	ct0.attack("Stormtrooper");
	ct0.attack("Vader");
	ct0.attack("Jabba the hutt");
	ct0.attack("Dark Maul");
	ct0.attack("Dark Sidius");
	ct0.attack("Dark Tyranus");
	ct0.attack("Dark Revan");
	ct0.attack("Bobba Fett");

	std::cout << ct0 << std::endl;

	ct0.attack("Kylo Ren");
	ct0.beRepaired(1);

	ct0.takeDamage(ct0.getHitPoints());

	return EXIT_SUCCESS;
}
