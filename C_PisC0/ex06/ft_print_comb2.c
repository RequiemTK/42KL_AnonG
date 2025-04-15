/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:54:42 by anong             #+#    #+#             */
/*   Updated: 2025/04/11 11:26:18 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int num)
{
	char	tens;
	char	ones;

	tens = '0' + (num / 10);
	ones = '0' + (num % 10);
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while ((++i) < 99)
	{
		j = i;
		while ((++j) < 100)
		{
			write_num(i);
			write(1, " ", 1);
			write_num(j);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
		}
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
