/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:38:30 by bkwamme           #+#    #+#             */
/*   Updated: 2023/09/17 14:32:04 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int    i;

	i = 0;
	while (i < n && (s2[i] != '\0' || s1[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	tempi;
	int	i;
	int	tfi;
	char	nullstr[] = {""};

	i = 0;
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			tfi = 0;
			tempi = i;
			while(str[tempi] )
			if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
				return (to_find);
		}
		i++;
	}
	return (nullstr);
}

#include<stdio.h>
int main()
{
	char c[] = {"Bom dia simpatia"};
	char c1[] = {"dia"};

	printf("%s\n", ft_strstr(c, c1));

	return 0;
}
