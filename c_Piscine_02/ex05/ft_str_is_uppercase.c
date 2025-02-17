#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char test1[] = "";
        char test2[] = "Hes";
        char test3[] = "SOS";

        int result1 = ft_str_is_uppercase(test1);
        int result2 = ft_str_is_uppercase(test2);
        int result3 = ft_str_is_uppercase(test3);

	char buf[3];

	buf[0] = result1 + '0';
	buf[1] = result2 + '0';
	buf[2] = result3 + '0';
        write (1, buf, 3);
	return 0;
}

