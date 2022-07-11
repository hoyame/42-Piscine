/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:13:59 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/11 12:18:31 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	maxint;
	int	i;

	maxint = 0;
	i = 0;
	while (dest[maxint])
	{
		maxint++;
	}
	while (src[i])
	{
		dest[maxint + i] = src[i];
	}
	return (dest);
}
