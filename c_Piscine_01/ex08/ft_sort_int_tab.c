#include <stdio.h>
void swap(int *tab, int largest, int lastunsortedindex)
{
	int	temp;

	temp = tab[lastunsortedindex];
	tab[lastunsortedindex] = tab[largest];
	tab[largest] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	lastunsortedindex;
	int	largest;

	
	lastunsortedindex = size - 1;	
	while (lastunsortedindex > 0)
	{
		largest = 0;
		i = 1;
		while (i <= lastunsortedindex)
		{
			if (tab[i] > tab[largest])
			{
				largest = i;
			}
			i++;
		}
		swap(tab, largest, lastunsortedindex);
		lastunsortedindex--;
	}
}


int main()
{
	int arr[] = {9,1,8,5,3};
	int *tab = arr;

	ft_sort_int_tab(tab, 5);

		for (int i = 0; i < 5; i++){
			printf ("%d, " , tab[i]);
		}

	
}
