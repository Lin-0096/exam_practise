#include <unistd.h>
#include <stdlib.h>

// int	is_space(char c)
// {
// 	return(c == ' ' || c == '\t' || c == '\n');
// }

// int main(int argc, char **argv)
// {
//     int first = 1;
//     if(argc != 2)
//     {
//         write(1, "\n", 1);
//         return(0);
//     }
//     int i = 0;
//     while(argv[1][i])
//         i++;
//     while(i > 0)
//     {
//         while ((is_space(argv[1][i]) || argv[1][i] == '\0' )&& argv[1][i])
//             i--;
//         int j = i;
//         while(!is_space(argv[1][j]) && j >=0)
//             j--;
//         j++;
//         if(!first)
//             write(1, " ", 1);
//         write(1, &argv[1][j], i - j);
//         first = 0;
//         i = j;
//     }
//     write(1, "\n", 1);
//     return(0);
// }

// #include <unistd.h>

// int	is_space(char c)
// {
// 	return(c == ' ' || c == '\t' || c == '\n');
// }

// int main(int argc, char **argv)
// {
// 	int first = 1;

// 	if (argc != 2)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}

// 	char *str = argv[1];
// 	int end = 0;

// 	while (str[end])
// 		end++;

// 	end--; // 指向最后一个有效字符
// 	while (end >= 0)
// 	{
// 		while (end >= 0 && is_space(str[end]))
// 			end--;

// 		if (end < 0)
// 			break;

// 		int start = end;
// 		while (start >= 0 && !is_space(str[start]))
// 			start--;

// 		start++;

// 		if (!first)
// 			write(1, " ", 1);

// 		write(1, &str[start], end - start + 1);

// 		first = 0;
// 		end = start - 1;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

int main(int argc, char **argv)
{
    int first = 1;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    char *str = argv[1];
    int end = 0;
    while(str[end])
        end++;
    end--;
    while(end >= 0)
    {
        while(is_space(str[end]) && end >= 0)
            end--;
        int start = end;
        while(!is_space(str[start]) && start >= 0)
            start--;
        start++;
        if(!first)
            write(1, " ", 1);
        write(1, &str[start], end - start +1);
        first = 0;
        end = start - 1;
    }
    write(1, "\n", 1);
    return(0);
}