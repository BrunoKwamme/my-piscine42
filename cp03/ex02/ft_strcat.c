/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:49:29 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/16 15:21:06 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	overun;
	int	i;

	overun = 0;
	i = 0;
	while (dest[overun] != '\0')
		overun++;
	while (src[i] != '\0')
	{
		dest[overun] = src[i];
		i++;
		overun++;
	}
	dest[overun] = '\0';
	return (dest);
}
