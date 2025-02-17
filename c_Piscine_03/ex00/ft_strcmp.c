#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main()
{
	char s1[] = "ABC";
	char s2[] = "ABC";
	int result;

	result = ft_strcmp(s1, s2);

	if (result == 0)
	{
		write (1, &s1, 3);
		write (1, " Equal ", 7);
		write (1, &s2, 3);
	}
	else if (result < 0)
	{
		write (1, &s1, 3);
		write (1, " Less than ",11 );
		write (1, &s2, 3);
	}
	else
	{
		write (1, &s1, 3);
		write (1," Greater than ", 14);
		write (1, &s2, 3);
	}	
	return 0;
}
*/
