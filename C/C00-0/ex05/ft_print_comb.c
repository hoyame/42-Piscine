/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:05:58 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/07 01:00:40 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(int x, int y, int z)
{
	if (x < y && x < z && y < z)
	{
		if (x == '7' && y == '8' && z == '9')
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
		}
		else
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				print_nb(a, b, c);
				c++;
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}
