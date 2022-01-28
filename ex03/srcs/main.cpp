/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:02:21 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 00:43:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/ScavTrap.hpp"
#include "class/FragTrap.hpp"
#include "class/DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	ct("Orochimaru");
	ScavTrap	st("Tsunade");
	FragTrap	ft("Jiraya");
	DiamondTrap	dt("Minato");

	std::cout << dt << std::endl;
	dt.attack("Tobi");
	dt.whoAmI();

	return EXIT_SUCCESS;
}
