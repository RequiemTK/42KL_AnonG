int	ft_str_is_uppercase(char *str)
{
	int	i;
	
	i = 0;
	if (str == NULL || str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
}
