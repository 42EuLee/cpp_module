#include "MutantStack.hpp"
#include "styling.h"

int main()
{
    {
        cout << ORG << "-------RANDOM TEST------\n" << RESET << endl;
        MutantStack<int>            integer_stack;
        MutantStack<std::string>    string_stack;

        cout << BLU << "-------1. Pushing numbers into int Stack 1, 2, 3------\n" << RESET << endl;
        integer_stack.push(1);
        integer_stack.push(2);
        integer_stack.push(3);

        cout << BLU << "-------2. Pushing string into string Stack------\n" << RESET << endl;
        cout << BLU << "-------3. Pushing numbers into int Stack I AM DONE!------\n" << RESET << endl;
        string_stack.push("I");
        string_stack.push("AM");
        string_stack.push("DONE!");

        cout << BLU << "-------4. Printing top of Stack for both Stacks------\n" << RESET << endl;
        std::cout << YLW "top() = " RESET;
        std::cout << BLU << integer_stack.top() << RESET << std::endl;
        std::cout << YLW "top() = " RESET;
        std::cout << BLU << string_stack.top() << RESET << std::endl;
        std::cout << std::endl;
        cout << BLU << "-------5. Popping 1 value from each Stack and Printing the Top again------\n" << RESET << endl;
        integer_stack.pop();
        string_stack.pop();

        std::cout << YLW "top() = " RESET;
        std::cout << BLU << integer_stack.top() << RESET << std::endl;
        std::cout << YLW "top() = " RESET;
        std::cout << BLU << string_stack.top() << RESET << std::endl;
        std::cout << std::endl;
    }
    cout << ORG << "-------PDF TEST CASES------\n" << RESET << endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    }
}