/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:27:09 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/09 23:57:01 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_alphabet(int theindex)
{
	char	letters[52];
	char	j;
	int		f;

	j = 'a';
	f = 0;
	while (j <= 'z')
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

int	ft_str_is_lowercase(char *str)
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
