/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:26 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/26 15:01:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st0;
	ScavTrap	st1("T800");
	ScavTrap	st2(st1);

	std::cout << st0 << std::endl;
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;

	st0 = ScavTrap("TX");
	st1 = ScavTrap("T1000");

	std::cout << st0 << std::endl;
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;

	st0.guardGate();
	st1.guardGate();
	st0.guardGate();
	st2.guardGate();

	return EXIT_SUCCESS;
}
