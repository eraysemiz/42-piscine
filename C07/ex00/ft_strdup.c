/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:18:52 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/12 12:21:37 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size_src;
	int		i;
	char	*dest;

	i = 0;
	size_src = ft_strlen(src);
	dest = malloc((size_src + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
