int	ft_recursive_power(int nb, int power)
{
	if(pwer < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
