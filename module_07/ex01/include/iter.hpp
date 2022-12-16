#ifndef ITER_HPP
#define ITER_HPP

#include <string>

template <typename T>
void iter(T array[], std::size_t length, void (*f)(T)) {
	for (std::size_t i = 0; i < length; i++) {
		f(array[i]);
	}
}

#endif