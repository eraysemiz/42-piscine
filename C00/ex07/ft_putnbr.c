/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:06:00 by esemiz            #+#    #+#             */
/*   Updated: 2024/01/27 14:06:00 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int		temp;
	int		length;
	char	n_out[11];

	length = 0;
	temp = n;
	while (temp != 0)
	{
		n_out[length] = (temp % 10) + '0';
		temp /= 10;
		length++;
	}
	while (length >= 0)
	{
		write(1, &n_out[length], 1);
		length--;
	}
}
