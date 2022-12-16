#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::fstream	inFile, outFile;
	std::string		line, content, result; 
	size_t			pos = 0, prevPos;
	(void) argv;
	if (argc != 4)
	{
		std::cout << "Bad arguments (path_to_file, word_to_replace, new_word)" << std::endl;
		return (0);
	}
	inFile.open(argv[1], std::ios::in);
	if (!inFile)
	{
		std::cout << "File '" << argv[1] << "' doesn't exists" << std::endl;
		return (0);
	}
	outFile.open(((std::string)argv[1]).append(".replace"), std::ios::out);
	if (!outFile)
	{
		std::cout << "File already exists" << std::endl;
		return (0);
	}
	while (getline(inFile, line, '\0'))
		content.append(line);
	while (pos != std::string::npos)
	{
		prevPos = pos;
		pos = content.find((std::string)argv[2], pos);
		if (pos != std::string::npos)
		{
			result.append(content.substr(prevPos, pos - prevPos));
			result.append((std::string)argv[3]);
			pos += ((std::string)argv[2]).length();
		}
		else
			result.append(content.substr(prevPos));
	}
	outFile << result;
	return (0);
}