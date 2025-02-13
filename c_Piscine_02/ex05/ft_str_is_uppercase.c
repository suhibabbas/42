#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return 1;

	while (str[i] != '\0')
	{
		if (!(str[i] >='A' && str[i] <= 'Z'))
		{
			return 0;
		}
		else
		{
			return 1;
		}
		i++;
	}
}

int main()
{
	char test1[] = "  hi";
        char test2[] = "HI SOS";
        char test3[] = "SOS";

        int result1 = ft_str_is_uppercase(test1);
        int result2 = ft_str_is_uppercase(test2);
        int result3 = ft_str_is_uppercase(test3);

        printf("%d, ", result1);
        printf("%d, ", result2);
        printf("%d", result3);

        return 0;
}

