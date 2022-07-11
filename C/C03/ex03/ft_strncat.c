/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:19:08 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/11 12:20:07 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	maxint;
	int	i;

	maxint = 0;
	i = 0;
	while (dest[maxint] && maxint <= nb)
	{
		maxint++;
	}
	while (src[i] && i <= nb)
	{
		dest[maxint + i] = src[i];
	}
	return (dest);
}
