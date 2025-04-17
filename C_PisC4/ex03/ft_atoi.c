int	atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
