#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

        i = 0;
        if (str[i] == '\0')
        {
                return 1;
        }

        while (str[i] != '\0')
        {
                if(!(str[i] >= '0' && str[i] <= '9'))
                {
                        return 0;
                }
                i++;
        }

        return 1;
}

int     main()
{
        char test1[] = "Hello";
        char test2[] = "";
        char test3[] = "777";

        char result1 = ft_str_is_numeric(test1) + '0';
        char result2 = ft_str_is_numeric(test2) + '0';
        char result3 = ft_str_is_numeric(test3) + '0';

        write (1, &result1, 1);
	write (1, &result2, 1);
	write (1, &result3, 1);
	
        return 0;
}
