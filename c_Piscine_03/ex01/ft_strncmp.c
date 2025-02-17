#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if((*s1 != *s2) || *s1 == '\0')
		{
			return ((unsigned char) *s1 - (unsigned char) *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
int	main()
{
	char s1[] = "ABCD";
	char s2[] = "ABcZ";
	int 	result;

	result = ft_strncmp(s1, s2, 3);
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
