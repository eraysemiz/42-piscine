/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:49:02 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/14 13:27:54 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			i;

	i = 0;
	strs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strs)
		return (0);
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].copy = ft_strdup(av[i]);
		strs[i].str = av[i];
		i++;
	}
	strs[i].str = 0;
	return (strs);
}
