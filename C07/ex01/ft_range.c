/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:30 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/24 15:44:35 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	if (min >= max)
		return (0);
	i = max - min;
	range = malloc(i * sizeof(int));
	j = 0;
	while (j < i)
	{
		range[j] = min;
		min++;
		j++;
	}
	return (range);
}


int	main()
{
	int	i = 123;
	int	j = 42;
	int	*range;
	int	o = 0;
	range = ft_range(i, j);
	while (o < j - i)
	{
		printf("%d ", range[o]);
		o++;
	}
	return 0;
}
