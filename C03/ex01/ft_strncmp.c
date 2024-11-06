/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:42:06 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/24 12:24:17 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n) && s1[i] == s2[i])
	{
		i++;
	}
	if (n == 0 || i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main()
{
	char	*s1 = "Ela";
	char	*s2 = "ElA";

	printf("%d", strncmp(s1, s2, 3));
	return (0);
}
