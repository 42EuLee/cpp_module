#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <iomanip>  
# include <string>
# include <cmath>
# include <climits>

using std::string;
using std::cout;
using std::endl;

class Data
{
	private:
		int	_number;
	public:
		Data();
		Data(int number);
		~Data();
		Data(const Data &old_obj);

		Data &operator=(const Data &ref);
		int	getNumber() const;

};

uintptr_t serialize(Data* ptr);
Data	*deserialization(uintptr_t raw);

#endif