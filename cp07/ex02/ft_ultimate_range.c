/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:50:46 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/21 17:13:41 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*mem;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	mem = malloc(sizeof(int) * (i));
	if (mem == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = mem;
	i = 0;
	while (max > min)
	{
		mem[i] = min;
		min++;
		i++;
	}
	return (i);
}
