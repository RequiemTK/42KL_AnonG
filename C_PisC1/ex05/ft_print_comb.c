/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:17:45 by anong             #+#    #+#             */
/*   Updated: 2025/04/10 17:09:03 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_write(int i, int j, int k);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 8)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				ft_write(i, j, k);
				k = k + 1;
			}
			j = j + 1;
			k = j;
		}
		i = i + 1;
		j = i;
	}
}

void	ft_write(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
