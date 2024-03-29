/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:49:44 by acomet            #+#    #+#             */
/*   Updated: 2024/03/03 15:37:43 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	/*	Same block ass ex00	(till STOOOP)	*/
{
	Bureaucrat	Jean;
	Bureaucrat	dopple(Jean);

	std::cout << "grade : " << Jean << std::endl;
	std::cout << "grade : " << dopple << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 149; i++)
		dopple.increment();
	std::cout << "Dopple new grade after 149 increments : " << dopple.getGrade() << std::endl;
	dopple.decrement();
	dopple.decrement();
	std::cout << "Dopple new grade after 2 decrements : " << dopple.getGrade() << std::endl;
	std::cout << std::endl << std::endl;
}
{
/*	test throw error	*/
	try
	{
		Bureaucrat	Jean("Bob", 151);
		Bureaucrat	Bob("Jean", 0);
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
{
	Bureaucrat	BOB("Jean", 1);
	Bureaucrat	Jean("BOB", 150);
	try
	{
		Jean.decrement();
		BOB.increment();
	}
	catch(GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
}
