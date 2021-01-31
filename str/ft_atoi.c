/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:04:53 by anfernan          #+#    #+#             */
/*   Updated: 2021/01/30 17:17:55 by anfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int result;
	int neg;

	result = 0;
	neg = 1;
	while (*str)
	{
		if (str[0] == '-')
		{
			neg = -1;
			str++;
		}
		if (*str >= '0' && *str <= '9')
		{
			result += (*str - 48);
			str++;
		}
		else
			return (result / 10 * neg);
		result *= 10;
	}
	return (result / 10 * neg);
}
