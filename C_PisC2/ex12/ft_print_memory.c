/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:54:05 by anong             #+#    #+#             */
/*   Updated: 2025/04/16 20:40:29 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

void	ft_put_addr(void *ptr)
{
	uintptr_t	addr;
	char		*hex_digits;
	char		output[18];
	int		i;

	addr = (uintptr_t)ptr;
	hex_digits = "0123456789abcdef";
	i = -1;
	while ((++i) < 16)
	{
		write(1, hex_digits[addr[i] / 10], 1);
		write(1, hex_digits[addr[i] % 10], 1);
	}
	write(1, ": ", 2);
	
}

void	ft_print_hex_chars(char *f)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	write(1, hex_chars[c / 10], 1);
	write(1, hex_chars[c % 10], 1);
	write(1, hex_chars[d / 10], 1);
	write(1, hex_chars[d % 10], 1);
	write(1, ' ', 1);
}

void	ft_print_sentences(char *d)
{
	int	k;

	k = 0;
	while (k < 16)
	{
		write(1, d[k], 1);
		k++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	split;

	split = 1;
	count = 1;
	while (addr[split - 1] != '\0')
	{
		if (split % 17 == 0)
		{
			ft_print_addr(addr);
			ft_print_hex_chars(addr);
			ft_print_sentences(addr);
			write(1, '\n', 1);
		}
		split++;
	}
}


