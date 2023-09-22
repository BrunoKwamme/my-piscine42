/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:03:01 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/18 19:44:34 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	fac = nb;
	while (nb > 1)
	{
		fac = fac * (nb - 1);
		nb--;
	}
	return (fac);
}
