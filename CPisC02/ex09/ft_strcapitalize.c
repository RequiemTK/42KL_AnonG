char	*ft_strcapitalize(char *str)
{
	int	i;
	int	Cap_Next;

	i = 0;
	Cap_Next = 1;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			Cap_Next = 0;
		else if (str[i] >= 97 && str[i] <= 122)
		{
			if (Cap_Next)
				str[i] = str[i] - 32;
			Cap_Next = 0;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (!Cap_Next)
				str[i] = str[i] + 32;
			Cap_Next = 0;
		}
		else 
			Cap_Next = 1;
		i++;
	}
	return (str);
}
