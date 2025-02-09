void ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	re;

	i = 0;
	re = size -1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[re];
		tab[re] = temp
		i++;
		re--;
	}
