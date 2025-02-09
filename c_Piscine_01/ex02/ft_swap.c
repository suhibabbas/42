#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int i = 1; 
	int j = 2;

	printf("%d\n", i);
	printf("%d\n", j);

	ft_swap(&i, &j);
	
	printf("%d\n", i);
        printf("%d\n", j);

	return 0;
}
