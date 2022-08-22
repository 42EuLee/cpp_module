#include "Bureaucrat.hpp"

int	main(void)
{
	cout << "Test 1:" << endl;
	try
	{
		Bureaucrat	Ding = Bureaucrat("Ding", 1);
		cout << Ding << endl;
		Ding.decrementGrade();
		cout << Ding << endl;
		Ding.incrementGrade();
		cout << Ding << endl;
		Ding.incrementGrade();
		cout << Ding << endl;
	}
	catch (exception &caught)
	{
		cout << caught.what() << endl;
	}

	cout << "Test 2:" << endl;
	try
	{
		Bureaucrat		Nigger = Bureaucrat("Nigger", 151);
		std::cout << Nigger << std::endl;;
	}
	catch (std::exception &caught)
	{
		std::cout << caught.what() << std::endl;
	}

	cout << "Test 3:" << endl;
	try
	{
		Bureaucrat	*derp = new Bureaucrat("derp", 100);

		cout << *derp;

		delete derp;
	}
	catch (Bureaucrat::GradeTooHighException &exception)
	{
		cout << exception.what() << endl;
	}
	catch (Bureaucrat::GradeTooLowException &exception)
	{
		cout << exception.what()<< endl;
	}
	return (0);
}