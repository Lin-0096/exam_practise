#include <unistd.h>

// int in_str(char *s, char c)
// {
// 	while (*s)
// 	{
// 		if (*s == c)
// 			return (1);
// 		s++;
// 	}
// 	return (0);
// }

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		while(argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
			}
			j++;
		}
		if (argv[1][i] == '\0') //!!
			write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}



