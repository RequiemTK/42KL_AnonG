/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:20:29 by anong             #+#    #+#             */
/*   Updated: 2025/04/11 11:59:44 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	positive_num(int nb)
{
	int	i;
	int	digit;
	int	started;
	char	c;

	i = 1000000000;
	started = 0;
	while (i > 0)
	{
		digit = nb / i;
		nb %= i;
		if (digit != 0 || started == 1)
		{
			c = '0' + digit;
			write(1, &c, 1);
			started = 1;
		}
		i /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "-", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	positive_num(nb);
}

int	main(void)
{
	ft_putnbr(28);
	return (0);
}
