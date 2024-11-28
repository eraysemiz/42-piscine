/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:10:45 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/05 14:12:15 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_char_is_uppercase(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_char_is_alnum(char c)
{
	int	check;

	if (c >= 'A' && c <= 'Z')
		check = 1;
	else if (c >= 'a' && c <= 'z')
		check = 1;
	else if (c >= '0' && c <= '9')
		check = 1;
	else
		check = 0;
	return (check);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_char_is_lowercase(str[0]))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (ft_char_is_alnum(str[i]))
		{
			if (ft_char_is_uppercase(str[i + 1]))
				str[i + 1] += 32;
			i++;
		}
		else
		{
			if (ft_char_is_lowercase(str[i + 1]))
			{
				str[i + 1] -= 32;
			}
			i++;
		}
	}
	return (str);
}
