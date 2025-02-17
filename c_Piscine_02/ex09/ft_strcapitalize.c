#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z') 
				&& (str[i - 1] < '0' || str[i - 1] > '9')
				&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "alut, cOmment tU vas ? 42Mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	write (1, str, 60);

	return 0;
}
