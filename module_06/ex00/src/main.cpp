#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <limits>

void scalarConversion(std::string input, char type)
{
	char cResult = 0;
	int iResult = 0;
	double dResult = 0;
	float fResult = 0;

	std::cout.precision(1);
	switch (type)
	{
		case 'f':
			try {
				fResult = stof(input);
			} catch(const std::exception& e) {
				scalarConversion(input, 'd');
				return;
			}
			if ((fResult != fResult) || (std::isinf(fResult))) {
				std::cout << std::fixed << "char: impossible\n";
				std::cout << std::fixed << "int: impossible\n";
			} else {
				if (fResult < SCHAR_MIN || fResult > SCHAR_MAX)
					std::cout << std::fixed << "char: impossible\n";
				else if (!isprint(static_cast<char>(fResult)))
					std::cout << std::fixed << "char: Non displayable\n";
				else
					std::cout << std::fixed << "char: " << static_cast<char>(fResult) << "\n";
				if (fResult < INT_MIN || fResult > INT_MAX)
					std::cout << std::fixed << "int: impossible\n";
				else
					std::cout << std::fixed << "int: " << static_cast<int>(fResult) << "\n";
			}
			std::cout << std::fixed << "float: " << fResult << "f\n";
			std::cout << std::fixed << "double: " << static_cast<double>(fResult) << "\n";
			break;

		case 'd':
			try {
				dResult = stod(input);
			} catch(const std::exception& e) {
				std::cout << "Could not detect input type.\n";
				return;
			}
			if ((dResult != dResult || std::isinf(dResult)) || std::isinf(static_cast<float>(dResult))) {
				std::cout << std::fixed << "char: impossible\n";
				std::cout << std::fixed << "int: impossible\n";
			} else {
				if (dResult < SCHAR_MIN || dResult > SCHAR_MAX)
					std::cout << std::fixed << "char: impossible\n";
				else if (!isprint(static_cast<char>(dResult)))
					std::cout << std::fixed << "char: Non displayable\n";
				else
					std::cout << std::fixed << "char: " << static_cast<char>(dResult) << "\n";
				if (dResult < INT_MIN || dResult > INT_MAX)
					std::cout << std::fixed << "int: impossible\n";
				else
				std::cout << std::fixed << "int: " << static_cast<int>(dResult) << "\n";
			}
			std::cout << std::fixed << "float: " << static_cast<float>(dResult) << "f\n";
			std::cout << std::fixed << "double: " << dResult << "\n";
			break;

		case 'i':
			try {
				iResult = stoi(input);
			} catch(const std::exception& e) {
				scalarConversion(input, 'd');
				return;
			}
			if (iResult < SCHAR_MIN || iResult > SCHAR_MAX)
				std::cout << std::fixed << "char: impossible\n";
			else if (!isprint(static_cast<char>(iResult)))
				std::cout << std::fixed << "char: Non displayable\n";
			else
				std::cout << std::fixed << "char: " << static_cast<char>(iResult) << "\n";
			std::cout << std::fixed << "int: " << iResult << "\n";
			std::cout << std::fixed << "float: " << static_cast<float>(iResult) << "f\n";
			std::cout << std::fixed << "double: " << static_cast<double>(iResult) << "\n";
			break;

		case 'c':
			if (input == "nanf" || input == "+inff" || input == "-inff") {
				scalarConversion(input, 'f');
				return;
			}
			if (input == "nan" || input == "+inf" || input == "-inf") {
				scalarConversion(input, 'd');
				return;
			}
			if (input.length() > 1) {
				std::cout << "Could not detect input type.\n";
				return;
			}
			cResult = input[0];
			if (isprint(cResult))
				std::cout << std::fixed << "char: " << cResult << "\n";
			else
				std::cout << std::fixed << "char: Non displayable\n";
			std::cout << std::fixed << "int: " << static_cast<int>(cResult) << "\n";
			std::cout << std::fixed << "float: " << static_cast<float>(cResult) << "f\n";
			std::cout << std::fixed << "double: " << static_cast<double>(cResult) << "\n";
			break;
	}
}

int main(int argc, char **argv, char **envp)
{
	(void)envp;
	if (argc != 2)
		return (1);
	std::string input = argv[1];
	int i = 0;

	while (isspace(input[i]))
		i++;
	if (input[i] == '+' || input[i] == '-')
		i++;
	if (!(input[i] >= 48 && input[i] <= 57)) {
		scalarConversion(input, 'c');
		return (0);
	}
	while (input[i] >= 48 && input[i] <= 57)
		i++;
	if (input[i] == '.')
	{
		i++;
		while (input[i] >= 48 && input[i] <= 57)
			i++;
		if (input[i] == 'f')
			scalarConversion(input, 'f');
		else 
			scalarConversion(input, 'd');
	}
	else
		scalarConversion(input, 'i');
	return (0);
}
