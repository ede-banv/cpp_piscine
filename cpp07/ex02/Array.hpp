#ifndef __ARRAY__
# define __ARRAY__

# include <iostream>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		virtual ~Array();

		Array&	operator=(const Array& rhs);
		T&		operator[](int n) const;
		int		size() const;
	private:
		T*	_array;
		int	_size;
};

template<typename T>
Array<T>::Array()
{
	this->_array = NULL;
	this->_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(const Array& copy)
{
	*this = copy;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete [] this->_array;
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	if (this == &rhs)	//au cas ou les deux pointent sur la meme chose
		return *this;
	this->~Array();		//eviter des leaks au cas ou il y a dj qqchose dedans
	this->_size = rhs.size();
	this->_array = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = rhs[i];
	return *this;
}

template<typename T>
T&		Array<T>::operator[](int n) const
{
	if (n < 0 || n >= this->_size)
		throw std::exception();
	return this->_array[n];
}

template<typename T>
int		Array<T>::size() const
{
	return this->_size;
}

#endif
