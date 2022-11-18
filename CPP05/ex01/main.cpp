#include "Bureaucrat.hpp"
#include "Form.hpp"
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
		cout << endl;
	}

	cout << ORG << "----Test 3: Member function test cases----" << RESET << endl;
	{
		Bureaucrat beau1 = Bureaucrat("beau1", 40); // higher grade
		Bureaucrat beau2 = Bureaucrat("beau2", 60); //lower grade
		Form form1 = Form("form1", 50, 50);
		Form form2 = Form("form1", 50, 50);

		cout << YLW << "\nSigning with a lower grade than required" << RESET << endl;
		form1.beSigned(beau2);
		cout << YLW << "\nSigning with a higher grade than required" << RESET << endl;
		form1.beSigned(beau1);
		cout << YLW << "\nSigning with a lower grade than required when form is already signed" << RESET << endl;
		form1.beSigned(beau1);
		cout << YLW << "\nSigning with a higher grade than required when form is already signed" << RESET << endl;
		form1.beSigned(beau2);

		// cout << endl;
		// cout << form1;
		// cout << endl;
	}
	cout << ORG << "----Test 4: Copy constructor and copy assignment operator-----" << RESET << endl;
	{
		cout << ORG << "-----Bureaucrat-----" << RESET << endl;
		Bureaucrat Kneegirl = Bureaucrat("Kneegirl", 100);
		Bureaucrat Kneegay = Bureaucrat("Kneegay", 20);

		Bureaucrat Kneeguy(Kneegay);
		cout << Kneeguy << endl;
		cout << Kneegirl << endl;
		Kneegirl = Kneegay;
		cout << Kneegirl << endl;
	
		cout << ORG << "-----Form-----" << RESET << endl;
		Form form1 = Form("form1", 50, 50);
		Form form2 = Form("form2", 30, 30);
		form2.beSigned(Kneegay);
		Form form3(form1);
		cout << form3 << endl;
		cout << form1 << endl;
		cout << form2 << endl;
		form1 = form2;
		cout << form1 << endl;
	}
	
}