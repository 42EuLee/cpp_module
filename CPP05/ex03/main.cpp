#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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

	// cout << "Test 4: " << endl;

	Bureaucrat beau1 = Bureaucrat("beau1", 40); // higher grade
	Bureaucrat beau2 = Bureaucrat("beau2", 60); // lower grade
	Bureaucrat beau3 = Bureaucrat("beau3", 150); // Eu Lee
	Bureaucrat beau4 = Bureaucrat("beau4", 1); // Global elite
	Intern intern;

	Form *form1;
	Form *form2;
	Form *form3;

	form1 = intern.makeForm("robotomy request", "Beggar Jason");
	form2 = intern.makeForm("presidential pardon", "Broke ass Yun zhe");
	form3 = intern.makeForm("shrubbery creation", "OKU Teck Yuan");

	PresidentialPardonForm newform("random ppl");

	cout << "=======Robotomy=====\n";
	form1->execute(beau4);
	form1->beSigned(beau3);
	form1->beSigned(beau1);
	form1->beSigned(beau4);
	form1->execute(beau4);
	form1->execute(beau1);
	cout << "======Presidential======\n";
	form2->execute(beau4);
	form2->beSigned(beau3);
	form2->beSigned(beau1);
	form2->beSigned(beau3);
	form2->beSigned(beau4);
	form2->execute(beau4);
	form2->execute(beau4);
	form2->execute(beau4);
	form2->execute(beau4);
	cout << "======Shrubbery======\n";
	form3->execute(beau4);
	form3->beSigned(beau4);
	form3->execute(beau4);
	form3->beSigned(beau1);
	form3->execute(beau4);
	cout << "===================\n";

	cout << endl;
	delete form1;
	delete form2;
	delete form3;
}