#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>

template <class T>
class Array {
	T *_array;
	unsigned int _size;

public:
	Array() : _array(new T[0]), _size(0) {};

	Array(unsigned int n) : _array(new T[n]), _size(n) {
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = T();
	};

	Array(const Array<T> &o) : _array(new T[o._size]), _size(o._size){
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = T(o._array[i]);
	};

	Array<T>& operator=(const Array<T> &o) {
		if (this == &o)
			return *this;
		_size = o._size;
		delete[] _array;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = T(o._array[i]);
		return *this;
	};

	~Array() {
		delete[] _array;
	};

	T& operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::invalid_argument("Array::IndexOutOfRange");
		return _array[index];
	};

	unsigned int size() const { return _size; };
};

#endif  