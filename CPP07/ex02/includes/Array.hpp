#ifndef Array_HPP
#define Array_HPP
#include <iomanip>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

template <class T>
class Array
{
	private :

	unsigned int n; //nb d'éléments dans l'Array
	T *array;

	public : 

	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array<T> &operator=(const Array &other);
	~Array();

	//        operator[] classique
	T &operator[](unsigned int index)
	{
    if (index >= this->n || index < 0)
        throw std::exception();
    return (array[index]);
	}
	//*********************************

	//        operator[] en const
	T const &operator[](unsigned int index) const
	{
    if (index >= this->n || index < 0)
        throw std::exception();
    return (array[index]);
	}
	//*********************************
	
	unsigned int size() const
	{
		return (this->n);
	}


};

template <class T>
Array<T>::Array()
{
    n = 0;
    this->array = NULL;;
}

template <class T>
Array<T>::Array(unsigned int n_)
{
	unsigned int i;

	i = 0;
	n = n_;
	array = NULL;
    this->array = new T[n_]();
}

template <class T>
Array<T>::Array(const Array &other)
{
    *this = other;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &other)
{
	unsigned int i;

	i = 0;
    this->n = other.n;
    this->array = new T[n];
	while (i < n)
	{
        this->array[i] = other.array[i];
		i++;
	}
    return (*this);
}

template <class T>
Array<T>::~Array()
{
	delete[] this->array;
}

#endif