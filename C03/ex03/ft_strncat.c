/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:37:03 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/06 06:27:13 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	i;

	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (i < nb && src[i] != '\0')
	{
		dest[destlen + i] = src [i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
