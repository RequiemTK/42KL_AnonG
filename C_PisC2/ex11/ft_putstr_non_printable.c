/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:25:18 by anong             #+#    #+#             */
/*   Updated: 2025/04/16 12:50:43 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_chars(int j)
{
	const char	hex_chars[] = "0123456789abcdef";

	ft_putchar(hex_chars[j / 16]);
	ft_putchar(hex_chars[j % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
		{
			ft_putchar('\\');
			print_hex_chars(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
