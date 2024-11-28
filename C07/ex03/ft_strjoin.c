/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:22:07 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/12 12:23:27 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_calc_length(int size, char **strs, char *sep)
{
	int	length;
	int	sep_count;
	int	i;

	length = 0;
	sep_count = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		sep_count++;
		i++;
	}
	length += ft_strlen(sep) * (sep_count - 1);
	length++;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;

	dest_len = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[dest_len] = *src++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		str_index;
	int		strs_index;

	if (size == 0)
	{
		result = malloc(1);
		return (result);
	}
	result = malloc(sizeof(char) * ft_calc_length(size, strs, sep));
	str_index = 0;
	result[str_index] = '\0';
	strs_index = 0;
	while (strs_index < size)
	{
		if (strs_index != 0)
		{
			ft_strcat(result + str_index, sep);
			str_index += ft_strlen(sep);
		}
		ft_strcat(result + str_index, strs[strs_index]);
		str_index += ft_strlen(strs[strs_index]);
		strs_index++;
	}
	return (result);
}
