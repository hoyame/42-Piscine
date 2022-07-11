/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:21:24 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/09 13:38:51 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_alphabet(int theindex)
{
	char	letters[52];
	char	j;
	int		f;

	j = 'A';
	f = 0;
	while (j <= 'Z')
	{
		letters[f] = j;
		j++;
		f++;
	}
	return (letters[theindex]);
}

int	is_alphabet(char l)
{
	int		i;

	i = 0;
	while (i <= 52)
	{
		if (get_alphabet(i) == l)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_alphabet(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
