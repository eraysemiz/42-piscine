/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:16:34 by esemiz            #+#    #+#             */
/*   Updated: 2024/02/13 18:18:28 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 9)
		ft_putchar('0' + nb);
}

void	ft_show_tab(struct s_stock_str *arr)
{
	int	i;

	i = 0;
	while (arr[i].str != 0)
	{
		ft_putstr(arr[i].str);
		ft_putstr("\n");
		ft_putnbr(arr[i].size);
		ft_putstr("\n");
		ft_putstr(arr[i].copy);
		ft_putstr("\n");
		i++;
	}
}
