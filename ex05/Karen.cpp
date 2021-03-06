/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bigo <rotrojan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:28:22 by bigo              #+#    #+#             */
/*   Updated: 2021/11/24 02:00:18 by bigo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"
#define NB_LEVELS 4

void	Karen::complain(std::string level) const
{
	void	(Karen::*function[NB_LEVELS])(void) const =
	{
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};
	std::string word_array[NB_LEVELS] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < NB_LEVELS; i++)
		if (level == word_array[i])
		{
			(this->*function[i])();
			return ;
		}
	std::cout << "I do not understand." << std::endl;
}

void	Karen::_debug(void) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-\
pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You \
don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve \
been coming here for years and you just started working here last month."
	<< std::endl;
}

void	Karen::_error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
