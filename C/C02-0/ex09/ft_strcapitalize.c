/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzouhari <hzouhari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:36:12 by hzouhari          #+#    #+#             */
/*   Updated: 2022/07/11 15:59:41 by hzouhari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphabet_number(char l)
{
	if ((l >= 48 && l <= 57) || (l >= 65 && l <= 90) || (l >= 97 && l <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_special_character(char l)
{
	if ((l >= 32 && l <= 47) || (l >= 58 && l <= 64) || (l >= 91 && l <= 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] > 126))
		{
			if (is_alphabet_number(str[i]) != 1)
			{
				if (is_special_character(str[i]) == 1)
				{
					str[i + 1] = str[i + 1] - 32;
					i++;
				}
			}
			i++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
