char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0') //we find the end of the source.
	{
		i++;
	}
	while (src[j] != '\0') //should be (src memory 1-10)(dest memory 10-20)
	{
		dest[i] = src[j];//usually set a buffer so it doesnt overwrite 
		i++;		// other memory.
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
