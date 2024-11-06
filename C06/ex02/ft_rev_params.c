/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:52:03 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/19 18:54:32 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*c;
	int		i;
	int		j;

	while (!argc)
		return (0);
	j = --argc;
	while (j >= 1 && argc > 1)
	{	
		i = 0;
		c = argv[j];
		while (c[i])
		{
			write(1, &c[i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
