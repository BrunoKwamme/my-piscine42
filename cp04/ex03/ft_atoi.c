/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:41:38 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/18 19:27:01 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_numeric_op(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	atoi;
	int	im;

	im = 0;
	atoi = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			im++;
		else if (check_numeric_op(str[i + 1] == 0))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = str[i] + atoi * 10 - '0';
		i++;
	}
	if (im % 2 != 0)
		atoi = atoi * -1;
	return (atoi);
}
