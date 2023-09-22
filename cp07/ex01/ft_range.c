/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:24:15 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/21 17:11:10 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*array;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	length = max - min;
	array = (int *) malloc (length * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < length)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
