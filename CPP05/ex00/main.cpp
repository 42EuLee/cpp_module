#include "Bureaucrat.hpp"
#include "styling.h"

int	main(void)
{
	cout << ORG << "----Test 1: Decrement and Increment----" << RESET << endl;
	{
		try
		{
		cout << YLW << "FYI -Smaller number grades represent an increasing order-" << RESET << endl;		
			Bureaucrat	Ding = Bureaucrat("Ding", 1);
			cout << TEL << Ding << RESET << endl;
			cout << YLW << "\nDecrementing grade (increasing number)" << RESET << endl;		
			Ding.decrementGrade();
			cout << TEL << Ding << RESET << endl;
			cout << YLW << "\nIncrementing (decreasing number)" << RESET << endl;		
			Ding.incrementGrade();
			cout << TEL << Ding << RESET << endl;
			cout << YLW << "\nIncrementing over the maximum" << RESET << endl;		
			Ding.incrementGrade();
			cout << TEL << Ding << RESET << endl;
		}
		catch (exception &caught)
		{
			cout << caught.what() << endl;
		}
		cout << endl;
	}

	cout << ORG << "----Test 2: Initializing number that is impossible (too low/high)----" << RESET << endl;
	{
		cout << YLW << "Initializing at grade 151" << RESET << endl;
		try
		{
			Bureaucrat Kneegirl = Bureaucrat("Kneegirl", 151);
			std::cout << Kneegirl << std::endl;;
		}
		catch (std::exception &caught)
		{
			std::cout << caught.what() << std::endl;
		}
		cout << YLW << "Initializing at grade 0" << RESET << endl;
		try
		{
			Bureaucrat Kneegirl = Bureaucrat("Kneegirl", 0);
			std::cout << Kneegirl << std::endl;;
		}
		catch (std::exception &caught)
		{
			std::cout << caught.what() << std::endl;
		}

		cout << YLW << "Initializing at a valid grade" << RESET << endl;
		try
		{
			Bureaucrat	*Kneegirl = new Bureaucrat("Kneegirl", 100);

			cout << *Kneegirl << endl;

			delete Kneegirl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e.what() << endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cerr  << e.what()<< endl;
		}
	}
	cout << ORG << "----Test 3: Copy constructor and copy assignment operator-----" << RESET << endl;
	{
		Bureaucrat *Kneegirl = new Bureaucrat("Kneegirl", 100);
		Bureaucrat *Kneegay = new Bureaucrat("Kneegay", 50);

		Bureaucrat *Kneeguy(Kneegay);
		cout << *Kneeguy << endl;
		cout << *Kneegirl << endl;
		Kneegirl = Kneegay;
		cout << *Kneegirl << endl;
		delete Kneegirl;
		// delete Kneegay;
	}
	// system("leaks Bureaucrat");
}