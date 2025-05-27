#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void print_word(char *str, int start, int end)
{
	while (start < end)
		write(1, &str[start++], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int first = 1;
		while (argv[1][i])
		{
			while (is_space(argv[1][i]))
				i++;
			int start = i;
			while (argv[1][i] && !is_space(argv[1][i]))
				i++;
			int end = i;
			if (end > start)
			{
				if (!first)
					write(1, " ", 1);
				first = 0;
				print_word(argv[1], start, end);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}




int is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int in_word = 0;

		while (argv[1][i])
		{
			if (!is_space(argv[1][i]))
			{
				if (in_word)
					; // already in word, do nothing
				else if (i != 0) // not the first word
					write(1, " ", 1);
				in_word = 1;
				write(1, &argv[1][i], 1);
			}
			else
				in_word = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
