/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:11:25 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/07 03:22:37 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr(int nb)
{
	ft_putnbr_long(nb);
}
