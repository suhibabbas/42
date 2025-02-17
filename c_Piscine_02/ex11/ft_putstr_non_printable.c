#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char *hex = "0123456789abcdef";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			write (1, "\\", 1);
			write (1, &(hex[str[i] / 16]), 1);
			write (1, &(hex[str[i] % 16]), 1);
		}
		i++;
	}
}
/*
int	main()
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return 0;
}
*/
