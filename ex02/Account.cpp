/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:56:41 by olivierroy        #+#    #+#             */
/*   Updated: 2024/01/15 23:30:28 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Account::Account(int initial_deposit)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Account::~Account(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Account::getNbAccounts(void)
{

}

int	Account::getTotalAmount(void)
{
    
}

int	Account::getNbDeposits(void)
{
    
}

int	Account::getNbWithdrawals(void)
{
    
}

void	Account::displayAccountsInfos(void)
{
    
}

void	Account::makeDeposit(int deposit)
{
    
}

bool	Account::makeWithdrawal(int withdrawal)
{

}
int	Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{
    
}

void	Account::_displayTimestamp(void)
{
    
}
