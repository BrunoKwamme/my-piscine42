/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:20:50 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/11 16:05:35 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	position;

	j = 1;
	i = 0;
	swap = tab[0];
	position = 0;
	while (j < size)
	{
		while (i < size - j)
		{
			if (tab[i] > tab[i+1])
			{
				swap = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = swap;
			}
			i++;
		}
		j++;
	}
}

int main()
{
	int array[8] = {7,6,5,4,3,2,1,0};
	ft_sort_int_tab(array, 8);

	for(int i = 0; i < 8; i++)
		printf("%d\n", array[i]);

	return 0;
}
