/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:20 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/05 13:39:12 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralph;

	ralph = 'z';
	while (ralph >= 'a')
	{
		write(1, &ralph, 1);
		ralph--;
	}
}
