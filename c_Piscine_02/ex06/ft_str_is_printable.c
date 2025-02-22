int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0; 
	while (*str)
	{
		if(*str < ' ' || *str > '~')
			return (0);
		str++;
	}
		
	return (1);
}

int main()
{
}
