/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:33:57 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/23 11:36:58 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		j;
	int		i;
	char	*str;

	if (!argc)
		return (0);
	j = 1;
	while (j < argc)
	{	
		str = argv[j];
		i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
