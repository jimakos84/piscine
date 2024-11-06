/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:14:28 by dvlachos          #+#    #+#             */
/*   Updated: 2024/09/20 12:08:59 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	mod;

	mod = 2;
	if (nb == 2)
		return (1);
	if (nb == 1 || nb < 0)
		return (0);
	while (mod < nb && mod != nb)
	{
		if (nb % mod == 0)
		{
			return (0);
		}
		mod++;
	}
	return (1);
}
