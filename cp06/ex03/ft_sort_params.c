/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:35:50 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/21 13:10:28 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	**ft_sort_params(char **arg,  int size)
{
	char		*swap;
	char		*temp;
	int	i;

	i = 0;
	while(i < size-1)
	{
		swap = arg[i];
		if (ft_strcmp(arg[i], swap) > 0)
		{
			temp = arg[i];
			arg[i] = swap;
			swap = temp;
		}
		i++;
	}
	return (arg);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_params(argv, argc);
	while(i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
