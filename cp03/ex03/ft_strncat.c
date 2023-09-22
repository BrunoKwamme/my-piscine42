/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:39:54 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/16 17:39:48 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	overun;

	i = 0;
	overun = 0;
	while (dest[overun] != '\0')
		overun++;
	while (i < nb && src[i] != '\0')
	{
		dest[overun] = src[i];
		i++;
		overun++;
	}
	dest[overun] = '\0';
	return (dest);
}
