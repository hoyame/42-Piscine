/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:41:42 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/09 19:52:35 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	is_last_combination(int n, int d[])
{
	bool	condition;
	int		p;

	condition = true;
	p = 0;
	while (condition && p < n)
	{
		if (!(d[p] == 10 - n + p))
		{
			condition = false;
		}
		p++;
	}
	return (condition);
}

void	write_combination(int n, int d[])
{
	int		p;
	char	c;

	p = 0;
	while (p < n)
	{
		c = '0' + d[p];
		write(1, &c, 1);
		p++;
	}
	if (!(is_last_combination(n, d)))
	{
		write(1, ", ", 2);
	}
}

void	recursive_loop(int n, int d[], int p)
{
	if (p == 0)
	{
		d[0] = 0;
	}
	else
	{
		d[p] = d[p - 1] + 1;
	}
	while (d[p] < 10)
	{
		if (p == n - 1)
		{
			write_combination(n, d);
		}
		else
		{
			recursive_loop(n, d, p + 1);
		}
		d[p]++;
	}
}

void	ft_print_combn(int n)
{
	int		d[9];

	recursive_loop(n, d, 0);
}
