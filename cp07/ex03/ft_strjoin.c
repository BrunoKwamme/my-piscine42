/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:38:45 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/21 17:05:35 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_arrlen(int size, char **strs)
{
	int	length;
	int	i;

	i = 0;
	while (i <= size - 1)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	return (length);
}

void	ft_put_sep(char *sep, int x, char *mem)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		mem[x] = sep[i];
		i++;
		x++;
	}
}

void	ft_put_arrstr(char **strs, int temp, int x, char *mem)
{
	int	i;

	i = 0;
	while (strs[temp][i] != '\0')
	{
		mem[x] = strs[temp][i];
		i++;
		x++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)

{
	char	*mem;
	int		length;
	int		i;
	int		temp;
	int		x;

	x = 0;
	temp = 0;
	length = ft_str_arrlen(size, strs);
	mem = malloc(((ft_strlen(sep) * (size - 1)) + length) * sizeof(char));
	**strs = *mem;
	while (temp < size)
	{
		i = 0;
		ft_put_arrstr(strs, temp, x, mem);
		x = x + ft_strlen(strs[temp]);
		if (temp + 1 != size && temp != 0)
		{
			ft_put_sep(sep, x, mem);
			x = x + ft_strlen(sep);
		}
		temp++;
	}
	return (mem);
}
