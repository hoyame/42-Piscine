/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:17:27 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/10 23:41:14 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_alphabet(int theindex)
{
	char	letters[10];
	char	i;
	int		f;

	i = '0';
	f = 0;
	while (i <= '9')
	{
		letters[f] = i;
		i++;
		f++;
	}
	return (letters[theindex]);
}

int	is_alphabet(char l)
{
	int		i;

	i = 0;
	while (i <= 10)
	{
		if (get_alphabet(i) == l)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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
