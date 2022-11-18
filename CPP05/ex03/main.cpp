#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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

	cout << ORG << "----Test 3: Copy constructor and copy assignment operator-----" << RESET << endl;
	{
		cout << ORG << "-----Bureaucrat-----" << RESET << endl;
		Bureaucrat Kneegirl = Bureaucrat("Kneegirl", 100);
		Bureaucrat Kneegay = Bureaucrat("Kneegay", 20);
		Bureaucrat Kneeguy(Kneegay);

		cout << Kneeguy << endl;
		cout << Kneegirl << endl;
		Kneegirl = Kneegay;
		cout << Kneegirl << endl;
		cout << ORG << "-----Shrubbery-----" << RESET << endl;
		Form *form1 = new ShrubberyCreationForm("derp");
		Form *form2 = new ShrubberyCreationForm("derpderp");

		cout << *form1 << endl;
		form1->beSigned(Kneegay);
		cout << *form1 << endl;
		form1 = form2;
		cout << *form1 << endl;
		cout << "here" << endl;
		// delete form1;
		// delete form2;
		cout << ORG << "-----Robotomy-----" << RESET << endl;
		Form *form3 = new RobotomyRequestForm("derp");
		Form *form4 = new RobotomyRequestForm("derpderp");

		cout << *form3 << endl;
		form3->beSigned(Kneegay);
		cout << *form3 << endl;
		form3 = form4;
		cout << *form3 << endl;
		// delete form3;
		// delete form4;
		cout << ORG << "-----Presidential-----" << RESET << endl;
		Form *form5 = new PresidentialPardonForm("derp");
		Form *form6 = new PresidentialPardonForm("derpderp");

		cout << *form5 << endl;
		form5->beSigned(Kneegay);
		cout << *form5 << endl;
		form5 = form6;
		cout << *form5 << endl;
		// delete form1;
		// delete form2;
		cout << ORG << "-----Intern-----" << RESET << endl;
	
	
	}

	cout << ORG << "----Test 4: Member function test cases----" << RESET << endl;
	{
		Bureaucrat beau1 = Bureaucrat("Bureaucrat higher grade (40)", 40); // Higher grade
		Bureaucrat beau2 = Bureaucrat("Bureaucrat lower grade (60)", 60); // Lower grade
		Bureaucrat beau3 = Bureaucrat("Bureaucrat lowest grade (150)", 150); // Worst grade
		Bureaucrat beau4 = Bureaucrat("Bureaucrat highest grade (1)", 1); // Best grade
		Intern intern;
		Intern internagain;

		Form *form1;
		Form *form2;
		Form *form3;
		Form *form4;

		form1 = intern.makeForm("presidential pardon", "Oh Wait Yun zhe");
		form2 = intern.makeForm("robotomy request", "Side parking Jason");
		form3 = intern.makeForm("shrubbery creation", "OKU Teck Yuan");
		intern = internagain;
	
		cout <<  YLW << "======Creating an unexisting Form======" << RESET << endl;
		form4 = intern.makeForm("retard murder", "Side parking Jason");

		cout <<  TEL << "======Shrubbery Creation Form Test======" << RESET << endl;
		cout << YLW << "----<1. Executing a non-signed form>----" << RESET << endl;
		form3->execute(beau4);
		cout << YLW << "----<2. Signing a non-signed form>----" << RESET << endl;
		form3->beSigned(beau4);
		cout << YLW << "----<3. Executing Form>----" << RESET << endl;
		form3->execute(beau4);
		cout << YLW << "----<4. Signing a signed form>----" << RESET << endl;
		form3->beSigned(beau1);

	
		cout <<  TEL << "======Robotomy Creation Form Test======" << RESET << endl;
		cout << YLW << "----<1. Executing a non-signed form>----" << RESET << endl;
		form2->execute(beau4);
		cout << YLW << "----<2. Signing Form with a lower grade>----" << RESET << endl;
		form2->beSigned(beau3);
		cout << YLW << "----<3. Signing Form with a higher grade>----" << RESET << endl;
		form2->beSigned(beau4);
		cout << YLW << "----<4. Signing Form an already signed form----" << RESET << endl;
		form2->beSigned(beau1);
		cout << YLW << "----<5. Executing Form in a for loop>----" << RESET << endl;
		for (int i = 0; i < 10 ; i++)
			form2->execute(beau4);

	
		cout <<  TEL << "======Shrubbery Creation Form Test======" << RESET << endl;
		cout << YLW << "----<1. Executing a non-signed form>----" << RESET << endl;
		form1->execute(beau4);
		cout << YLW << "----<2. Signing Form with a lower grade>----" << RESET << endl;
		form1->beSigned(beau3);
		cout << YLW << "----<3. Signing Form with a higher grade>----" << RESET << endl;
		form1->beSigned(beau4);
		cout << YLW << "----<4. Signing Form an already signed form----" << RESET << endl;
		form1->beSigned(beau1);
		cout << YLW << "----<5. Executing Form a higher grade>----" << RESET << endl;
		form1->execute(beau4);
		cout << YLW << "----<6. Executing Form a lower grade>----" << RESET << endl;
		form1->execute(beau1);
		cout << TEL << "======end======" << RESET << endl;

		cout << endl;
		delete form1;
		delete form2;
		delete form3;
	}
	// system("leaks Internkun");
}
