#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Parent {};
class Child1: public Parent {}; // Parent is more generic
class Child2: public Parent {}; // Child1 & Child2 more accurate

class Unrelated {}; // detached from the hierarchy of the inheritance tree
 
int main()
{
	// 1st class conversion : Static Class
	{
		int a = 42; // reference value

		double b = a; // implicit promotion -> ok
		int c = b; // implicit demotion -> no!
		int d = static_cast<int>(b); // explicit demotion -> ok

		return 0;
	}


	{
		Child1 a; // reference value

		Parent *b = &a; // implicit upcast -> ok
		// Child1 * c = b; // implicit downcast -> no!
		// Child2 * d = static_cast<Child2 *>(b); // explicit downcast -> ok

		// Unrelated * e = static_cast<Unrelated *>(&a); // explicit conversion -> no!
		// static_cast will make sure that the cast will happen within an inheritance tree
		return 0;
	}

	class Parent {public: virtual ~Parent(void) {} };
	class Child1: public Parent {};
	class Child2: public Parent {};
	{
		Child1 a; // reference value
		Parent * b = &a; // implicit upcast -> ok

		// explicit downcast
		Child1 * c = dynamic_cast<Child1 *>(b);
		if (c == NULL) {
			std::cout << "Conversion is NOT okay" << std::endl;
		}
		else {
			std::cout << "Conversion is okay" << std::endl;
		}

		// explicit downcast
		try {
			Child2 & d = dynamic_cast<Child2 &>(*b); // convert to a reference
			// it will fail because it casts to another
			// the reference can't be NULL by definition, so it needs another way
			// to handle the cast failure
			std::cout << "Conversion is okay" << std::endl;
		}
		catch (std::bad_cast &bc){
			std::cout << "Conversion is NOT okay: " << bc.what() << std::endl;
			return 0;
		}
	}
}

