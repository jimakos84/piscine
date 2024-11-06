/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:12:44 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/10 16:19:39 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	empty;

	empty = *a;
	*a = *b;
	*b = empty;
}

/*int	main()
{
	int a = 6;
	int b = 9;

	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
	return 0;
}*/
