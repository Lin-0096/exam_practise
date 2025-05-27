#include <unistd.h>

int is_double(char *str, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char buffer[1000];
		int  len = 0;
		int i = 0;

		while(argv[1][i])
			buffer[len++] = argv[1][i++];
		i = 0;
		while (argv[2][i])
			buffer[len++] = argv[2][i++];
		buffer[len] = '\0'; //!!
		int j = 0;
		while (buffer[j])
		{
			if(!is_double(buffer, buffer[j], j))
				write (1, &buffer[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


