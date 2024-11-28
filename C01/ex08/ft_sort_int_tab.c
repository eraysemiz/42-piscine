/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:40:04 by esemiz            #+#    #+#             */
/*   Updated: 2024/01/30 15:39:09 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = 0;
	while (a < size - 1)
	{
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				tmp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = tmp;
			}
			b++;
		}
		b = 0;
		a++;
	}
}
