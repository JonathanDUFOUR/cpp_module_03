/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:14:26 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 17:05:21 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct(std::string("T800"));
	ScavTrap	st(std::string("T1000"));

	std::cout << ct << std::endl;
	std::cout << st << std::endl;

	st = ScavTrap(std::string("TX"));

	std::cout << st << std::endl;

	st.attack(std::string("Sarah CONNOR"));

	st.guardGate();
	st.guardGate();
	st.guardGate();

	return EXIT_SUCCESS;
}
