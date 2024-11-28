/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:43:19 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/06 03:45:07 by esemiz           ###   ########.fr       */
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
