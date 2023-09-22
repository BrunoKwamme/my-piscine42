/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:25:25 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/20 01:54:46 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (nb > i)
	{
		if (nb % i == 0)
			ft_find_next_prime (++nb);
		i++;
	}
	return (nb);
}
