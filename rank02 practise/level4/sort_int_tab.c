void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int swap =1;

    while(swap)
    {
        swap = 0;
        i = 0;
        while(i < size -1)
        {
            if(tab[i] > tab[i+1])
            {
                int a = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = a;
                swap = 1;
            }
            i++;
        }
    }
}
#include <stdio.h>

int main(void)
{
	int arr[] = {42, 42};
	unsigned int size = 2;

	sort_int_tab(arr, size);

	for (unsigned int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return (0);
}