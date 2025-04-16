/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:23:27 by anong             #+#    #+#             */
/*   Updated: 2025/04/16 15:47:51 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_logic(char c, int cap)
{
	if (c >= 'a' && c <= 'z' && cap)
	{
		return (c - 32);
	}
	else if (c >= 'A' && c <= 'Z' && !cap)
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap_next;

	i = 0;
	cap_next = 1;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = ft_logic(str[i], cap_next);
		if (str[i] >= '0' && str[i] <= '9')
			cap_next = 0;
		else if (str[i] >= 97 && str[i] <= 122)
			cap_next = 0;
		else if (str[i] >= 65 && str[i] <= 90)
			cap_next = 0;
		else
			cap_next = 1;
		i++;
	}
	return (str);
}
