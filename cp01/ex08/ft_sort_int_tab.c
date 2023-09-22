/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:51:19 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/21 12:22:02 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	temp;
	int	i;
	int	seci;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		seci = i;
		while (seci < size)
		{
			seci++;
			if (tab[seci] < swap)
			{
				swap = tab[seci];
				temp = seci;
			}
		}
		if (tab[i] > tab[temp])
		{
			tab[temp] = tab[i];
			tab[i] = swap;
		}
		i++;
		printf("%d\n",tab[i]);
	}
}
int	main()
{
	int array[8] = {7,6,5,4,3,2,1,0};
	ft_sort_int_tab(array, 8);

	return 0;
}
