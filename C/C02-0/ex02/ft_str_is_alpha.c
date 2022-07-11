/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:47:30 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/09 23:26:52 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_alphabet(int theindex)
{
	char	letters[52];
	char	i;
	char	j;
	int		f;

	i = 'a';
	j = 'A';
	f = 0;
	while (i <= 'z')
	{
		letters[f] = i;
		i++;
		f++;
	}
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

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
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
