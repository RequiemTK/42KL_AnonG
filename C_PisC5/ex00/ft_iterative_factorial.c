int	ft_iterative_factorial(int nb)
{
	int		i;

	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int test = 10;
	ft_iterative_factorial(test);
	printf("%d", test);
	return (0);
}
*/
