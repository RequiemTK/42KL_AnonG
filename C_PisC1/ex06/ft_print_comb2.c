/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:56:12 by anong             #+#    #+#             */
/*   Updated: 2025/04/10 17:28:35 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_1(int i, int j);
void	ft_write_2(int k, int l);
void	ft_print_comb_2;

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;
	
	i = 0;
	j = 0;
	k = 0;
	l = 1;

	while (i < 10)
	{
		while(j < 10)
		{
			while(k < 10)
			{
				while(l < 10)
				{
					if (i != k && j != l)
					{
						ft_write_1(i, j);
						ft_write_2(k, l);
					}
				}
			}
		}
	}
}

void	ft_write_1(int i, int j)
{
	char	a;
	char	b;
	
	a = i + '0';
	b = j + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
}

void    ft_write_1(int k, int l)
{
        char    c;
        char    d;

        c = k + '0';
        d = l + '0';
        write(1, &c, 1);
        write(1, &d, 1);
        write(1, ", ", 2);
}

