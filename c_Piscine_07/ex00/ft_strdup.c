#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
        int     index;

        index = 0;

        while (*str)
        {
                index++;
                str++;
        }

        return index;
}

char	*ft_strdup(char *src)
{
	int	size;
	char	*dupstr;
	char	*str;

	size = ft_strlen(src);
	str = malloc(size + 1);
	if(str == NULL)
		return (NULL);
	dupstr = str;
	while (*src)
		*dupstr++ = *src++;
	*dupstr = '\0';
	return (str);
}
/*
int	main()
{
	char	*p;
	p = ft_strdup("ABC");
	printf("%s\n", p);
	return (0);
}
*/
