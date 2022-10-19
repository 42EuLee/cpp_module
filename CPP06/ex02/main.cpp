# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int main(void)
{
	Base *base = generate();
	identify_ptr(base);
	identify_ref(*base);

	delete base;
}