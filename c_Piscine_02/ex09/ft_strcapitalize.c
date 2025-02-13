#include <unistd.h>

int	ft_checkchar(char ch)
{
	return ((ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z')
			||(ch >= 'A' && ch <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;	
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (!ft_checkchar(str[i - 1]))
			if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;		
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "hello world-d";
	
	ft_strcapitalize(str);
	write (1, str, 15);

	return 0;
}
