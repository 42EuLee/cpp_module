// #ifndef EASYFIND_TPP
// # define EASYFIND_TPP

// #include "easyfind.hpp"

// template<class T>
// Array<T>::Array() 
// {
// 	this->_size = 0;
//     this->_arr = NULL;
// }

// template<class T>
// Array<T>::Array(unsigned int n) : _size(n)
// {
// 	this->_arr = new T[n];
// 	for (size_t i = 0; i < this->_size; i++)
// 			this->_arr[i] = 0;
// }

// template<class T>
// Array<T>::Array(const Array &ref) 
// {
// 	*this = ref;
// }

// template<class T>
// Array<T>::~Array()
// {
// 	if (this->_size > 0)
// 		delete (this->_arr);
// }

// template<class T>
// Array<T> &Array<T>::operator=(const Array<T> &ref)
// {
// 	if (ref._size > 0)
// 	{
// 		this->_size = ref.size();
// 		this->_arr = new T[this->_size];
// 		for (size_t i = 0; i < this->_size; i++)
// 			this->_arr[i] = ref.getIndex(i);
// 	}
// 	else
// 	{
// 		this->_size = 0;
// 		this->_arr = NULL;
// 	}
// 	return (*this);
// }

// template<class T>
// T &Array<T>::operator[](size_t index)
// {
// 	if (index >= this->_size || index < 0)
// 		throw IndexOutOfBounds();
// 	return (this->_arr[index]);
// }

// template<class T>
// int Array<T>::size() const
// { 
//     return (this->_size);
// }

// template<class T>
// T Array<T>::getIndexNum(int i) const
// {
// 	return (this->_arr[i]);
// }

// template<class T>
// T Array<T>::getArray()
// {
// 	return (this->_arr);
// }

// template<class T>
// const char	*Array<T>::IndexOutOfBounds::what(void) const throw()
// {
// 	return ("<Index out of bounds>");
// }

// template<class T>
// std::ostream &operator<<(std::ostream &out, Array<T> const &rhs)
// {
// 	out << "Baguettes: [";
// 	for (int i = 0; i < rhs.arraySize; i++)
// 		out << rhs.getIndexNum(i) << " ";
// 	out << "]" << endl;
// 	return (out);
// }

// #endif