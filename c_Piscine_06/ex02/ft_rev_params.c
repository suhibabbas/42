#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write (1, &argv[argc - 1][i], 1);
			i++;
		}
		if (argc - 1 > 1)
			write (1, "\n", 1);
		argc--;
	}
	return (0);
}
