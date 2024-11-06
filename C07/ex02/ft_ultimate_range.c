/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:31:33 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/24 15:49:08 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	i;
	int	*ultirange;

	if (min >= max)
		return (0);
	i = max - min;
	ultirange = malloc(i * sizeof(int));
	j = 0;
	while (j < i)
	{
		ultirange[j] = min;
		j++;
		min++;
	}
	*range = malloc(i * sizeof(int));
	*range = ultirange;
	return (i);
}

int	main()
{
	int	*array;
	int	i = 1;
	int	j = 10;

	printf("%d", ft_ultimate_range(&array, i, j));


	return(0);
}
