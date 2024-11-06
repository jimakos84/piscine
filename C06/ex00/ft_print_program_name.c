/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:08:12 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/23 11:34:44 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;
	int		i;

	i = 0;
	name = argv[0];
	if (!argc)
		return (0);
	while (name[i])
	{	
		write(1, &name[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
