/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:20:41 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/11 16:06:40 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	parse_char(char *str, int start_index)
{
	int		i;
	int		si;
	char	v[];

	si = start_index;
	i = si;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
			break ;
		v[i] = str[i];
	}
	return (v);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (str[i] && to_find[f])
			{
				parse_char(str, i)
			}
		}
	}
}
