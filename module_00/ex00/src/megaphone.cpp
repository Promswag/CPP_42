#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	int	k;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		while (argv[++i])
		{
			j = 0;
			k = strlen(argv[i]);
			if (k)
			{
				while (argv[i][j] == ' ')
					j++;
				while (k && argv[i][k - 1] == ' ')
					k--;
			}
			if (i > 1 && argv[i][j] != ' ')
				std::cout << ' ';
			while (argv[i][j] && j < k)
				std::cout << (char)toupper(argv[i][j++]);
		}
	}
	std::cout << std::endl;
}