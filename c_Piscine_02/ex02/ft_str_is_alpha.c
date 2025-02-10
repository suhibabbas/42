#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return 1;
	}

	while (str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return 0;
		}
		i++;
	}

	return 1;
}

int	main()
{
	char test1[] = "Hello";
	char test2[] = "";
	char test3[] = "s0s";

	int result1 = ft_str_is_alpha(test1);
	int result2 = ft_str_is_alpha(test2);
	int result3 = ft_str_is_alpha(test3);

	printf("%d, ", result1);
	printf("%d, ", result2);
	printf("%d", result3);

	return 0;
}
