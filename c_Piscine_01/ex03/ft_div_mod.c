#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 12;
	int b = 10;

	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf ("%d\n", div);
	printf ("%d", mod);

	return 0;
}
