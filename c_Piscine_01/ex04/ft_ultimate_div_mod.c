#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;

	*a = div;
	*b = rem;

	printf("%d, ", div);
	printf("%d" , rem);
}

int main()
{
	int i = 12;
	int j = 10;

	ft_ultimate_div_mod(&i, &j);
}
