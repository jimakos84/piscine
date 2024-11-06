/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:48:37 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/25 13:06:17 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		j;
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(i * sizeof(char));
	j = 0;
	while (src[j])
	{
		dup[j] = src[j];
		j++;
	}
	return (dup);
}

int	main()
{
	printf("%s", ft_strdup("nefeli"));
	return 0;
}
