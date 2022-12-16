#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <string>

template <class T>
int easyfind(T container, int match) {
	typename T::iterator it;
	it = find(container.begin(), container.end(), match);
	if (it != container.end())
		return *it;
	else
		throw std::invalid_argument("easyfind::NoMatchFound");
}

#endif