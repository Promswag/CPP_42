#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
	unsigned int _range;
	std::vector<int> _array;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &o);
	Span& operator=(const Span &o);
	~Span();

	void addNumber(int number);
	void addNumber(std::vector<int> numberArray);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void fill();
	unsigned int shortestSpan();
	unsigned int longestSpan() const;
};

#endif