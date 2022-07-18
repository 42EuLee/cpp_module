#include "Account.hpp"

#include <iostream>
#include <string>
using std::cout;
using std::cin;

int	main()
{
	Account	a0(42);
	Account	a1(54);
	Account	a2(957);
	Account	a3(432);
	Account	a4(1234);
	Account	a5(0);
	Account	a6(754);
	Account	a7(16576);
	Account::displayAccountsInfos();
	a0.displayStatus();
	a1.displayStatus();
	a2.displayStatus();
	a3.displayStatus();
	a4.displayStatus();
	a5.displayStatus();
	a6.displayStatus();
	a7.displayStatus();
	a0.makeDeposit(5);
	a1.makeDeposit(765);
	a2.makeDeposit(564);
	a3.makeDeposit(2);
	a4.makeDeposit(87);
	a5.makeDeposit(23);
	a6.makeDeposit(9);
	a7.makeDeposit(20);
	Account::displayAccountsInfos();
	a0.displayStatus();
	a1.displayStatus();
	a2.displayStatus();
	a3.displayStatus();
	a4.displayStatus();
	a5.displayStatus();
	a6.displayStatus();
	a7.displayStatus();
	a0.makeWithdrawal(50);
	a1.makeWithdrawal(34);
	a2.makeWithdrawal(657);
	a3.makeWithdrawal(4);
	a4.makeWithdrawal(76);
	a5.makeWithdrawal(50);
	a6.makeWithdrawal(657);
	a7.makeWithdrawal(7654);
	Account::displayAccountsInfos();
	a0.displayStatus();
	a1.displayStatus();
	a2.displayStatus();
	a3.displayStatus();
	a4.displayStatus();
	a5.displayStatus();
	a6.displayStatus();
	a7.displayStatus();
	return (0);
}