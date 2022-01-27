/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:26 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/27 18:53:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct("T800");
	ScavTrap	st("T1000");

	std::cout << ct << std::endl;
	std::cout << st << std::endl;

	st = ScavTrap("TX");

	std::cout << st << std::endl;

	st.attack(std::string("Sarah CONNOR"));

	st.guardGate();
	st.guardGate();
	st.guardGate();

	return EXIT_SUCCESS;
}
