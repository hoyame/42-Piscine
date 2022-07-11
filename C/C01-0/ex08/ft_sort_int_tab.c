/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:35:31 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/07 19:13:00 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	cache;

	i = 0;
	cache = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				cache = tab[i];
				tab[i] = tab[j];
				tab[j] = cache;
				i = 0;
				j = 1;
			}
			j++;
			i++;
		}
		i++;
	}
}
