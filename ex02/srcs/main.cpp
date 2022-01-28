/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:12:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 00:43:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/ScavTrap.hpp"
#include "class/FragTrap.hpp"

int	main(void)
{
	ClapTrap	ct("Pouic");
	ScavTrap	st("Koala");
	FragTrap	ft("Codac");

	std::cout << ct << std::endl;
	std::cout << st << std::endl;
	std::cout << ft << std::endl;

	ft = FragTrap("Jojoz");

	std::cout << ft << std::endl;

	ft.highFivesGuys();

	return EXIT_SUCCESS;
}
