#include "flood_fill.h"

void fill(char **tab, char target, t_point size, int x, int y)
{
    if(x < 0 || y < 0 || x >= size.x || y >=size.y)
        return ;
    if (tab[y][x] != target)
        return ;
    tab[y][x] = 'F';
    fill(tab, target, size, x, y - 1);
    fill(tab, target, size, x, y + 1);
    fill(tab, target, size, x - 1, y);
    fill(tab, target, size, x + 1, y);
}


void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target =tab[begin.y][begin.x];
    if (target == 'F')
        return ;
    fill(tab, target, size, begin.x, begin.y);
}
#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}