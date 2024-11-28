/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:39:40 by esemiz            #+#    #+#             */
/*   Updated: 2024/01/27 11:44:35 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	nums[3];

	nums[0] = 48;
	while (nums[0] <= 55)
	{
		nums[1] = nums[0] + 1;
		while (nums[1] <= 56)
		{
			nums[2] = nums[1] + 1;
			while (nums[2] <= 57)
			{
				write(1, &nums[0], 1);
				write(1, &nums[1], 1);
				write(1, &nums[2], 1);
				if ((nums[0] + nums[1] + nums[2]) != 168)
				{
					write(1, ", ", 2);
				}
				nums[2]++;
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
