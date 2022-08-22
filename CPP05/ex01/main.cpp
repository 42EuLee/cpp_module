#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	// cout << "Test 1:" << endl;
	// try
	// {
	// 	Bureaucrat	Ding = Bureaucrat("Ding", 1);
	// 	cout << Ding.getName() << endl;
	// 	cout << Ding.getGrade() << endl;
	// 	Ding.decrementGrade();
	// 	cout << Ding.getName() << endl;
	// 	cout << Ding.getGrade() << endl;
	// 	Ding.incrementGrade();
	// 	cout << Ding.getName() << endl;
	// 	cout << Ding.getGrade() << endl;
	// 	Ding.incrementGrade();
	// 	cout << Ding.getName() << endl;
	// 	cout << Ding.getGrade() << endl;
	// }
	// catch (exception &e)
	// {
	// 	std::cerr << e.what() << endl;
	// }

	// cout << "Test 2:" << endl;
	// try
	// {
	// 	Bureaucrat		Kneegirl = Bureaucrat("Knee girl", 151);
	// 	std::cout << Kneegirl << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// cout << "Test 3: " << endl;
	// try
	// {
	// 	Bureaucrat	*derp = new Bureaucrat("derp", 100);

	// 	cout << *derp;

	// 	delete derp;
	// }
	// catch (Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cerr << e.what() << endl;
	// }
	// catch (Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cerr  << e.what()<< endl;
	// }

	cout << "Test 4: " << endl;

	Bureaucrat beau1 = Bureaucrat("beau1", 40); // higher grade
	Bureaucrat beau2 = Bureaucrat("beau2", 60); //lower grade
	Form form1 = Form("form1", 50, 50);


	form1.beSigned(beau2);
	form1.beSigned(beau1);
	form1.beSigned(beau1);
	form1.beSigned(beau2);

	cout << endl;
	cout << form1;
	cout << endl;
	
}