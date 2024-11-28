/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:17:55 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/12 12:17:56 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	num;
	int	i;
	int	*arr;

	i = 0;
	num = max - min;
	if (min >= max)
		return (0);
	arr = malloc(num * sizeof(int));
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
