/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:07:52 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/25 20:18:22 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	int		i;
	int		j;
	
	if (size == 0)
		empty = NULL;
	i = 0;
	j = 0;
	while (i < size)
		j = j + ft_strlen(strs[i++]);
	i = 0;
	empty = malloc(((j + ft_strlen(sep)) * (size - 1)) * sizeof(char) + 1);
	while (i < size)
	{
		ft_strcat(empty, strs[i]);
		if (i < size - 1)
			ft_strcat(empty, sep);
		i++;
	}
	empty[j + ((ft_strlen(sep) * (size - 1))) + 1] = 0;
	return (empty);
}

#include <stdio.h>
int	main()
{
	char	*strings[] = {};
	int	size = sizeof(strings) / sizeof(strings[0]);
	
	printf("%s", ft_strjoin(size, strings, "_"));
	
	return (0);
}
