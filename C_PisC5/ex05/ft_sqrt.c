int	ft_sqrt(int nb)
{
	long int	i;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return ((int)i);
			i++;
		}
		return (0);
	}
}
