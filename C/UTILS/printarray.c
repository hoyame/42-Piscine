/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printarray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:36:06 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/07 14:42:12 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_long(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_long(nb / 10);
		ft_putnbr_long(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	printarray(int *b)
{
	int	size;
	int	i;

	i = 0;
	size = sizeof b;
	while (i < size)
	{
		ft_putnbr_long(b[i]);
	}
}
