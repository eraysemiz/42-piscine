/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:31:21 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/06 03:32:11 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	exit;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) < 1)
		return (str);
	while (i < ft_strlen(str))
	{
		exit = 0;
		while (j < ft_strlen(to_find) && exit != 1)
		{
			if (str[i + j] != to_find[j])
				exit = 1;
			else
				if (j == ft_strlen(to_find) - 1)
					return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
