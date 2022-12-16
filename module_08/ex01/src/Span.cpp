#include "Span.hpp"
#include <algorithm>
#include <iostream>

Span::Span() : _range(0) {}

Span::Span(unsigned int N) : _range(N) {}

Span::Span(const Span &o) : _range(o._range) {
	std::vector<const int>::iterator it = o._array.begin();
	while (it != o._array.end()) {
		_array.push_back(*it);
		it++;
	}
}

Span& Span::operator=(const Span &o)
{
	if (this == &o)
		return *this;
	_range = o._range;
	_array.clear();
	std::vector<const int>::iterator it = o._array.begin();
	while (it != o._array.end()) {
		_array.push_back(*it);
		it++;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
	if (_array.size() < _range)
		_array.push_back(number);
	else
		throw std::out_of_range("Span::ArrayFull");
}

void Span::addNumber(std::vector<int> numberArray) {
	std::vector<const int>::iterator it = numberArray.begin();
	while ((_array.size() < _range) && (it != numberArray.end())) {
		_array.push_back(*it);
		it++;
	}
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while ((_array.size() < _range) && (begin != end)) {
		_array.push_back(*begin);
		++begin;
	}
}

void Span::fill() {
	std::srand(std::time(nullptr));
	while (_array.size() < _range)
		_array.push_back(std::rand());
}

unsigned int Span::shortestSpan() {
	if (_array.size() < 2)
		throw std::invalid_argument("Span::ArrayTooSmall");
	std::sort(_array.begin(), _array.end());
	unsigned int delta = UINT_MAX;
	for (std::vector<const int>::iterator it = _array.begin(); it < _array.end() - 1; it++)
		if (abs(static_cast<long>(*it) - *(it + 1)) < delta)
			delta = abs(static_cast<long>(*it) - *(it + 1));
	return delta;
}

unsigned int Span::longestSpan() const {
	if (_array.size() < 2)
		throw std::invalid_argument("Span::ArrayTooSmall");
	return std::abs(*std::max_element(_array.begin(), _array.end()) - *std::min_element(_array.begin(), _array.end()));
}
