/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:02:24 by anfernan          #+#    #+#             */
/*   Updated: 2021/01/30 17:12:12 by anfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	atoi(const char *str);
int	ft_atoi(const char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Resultado atoi: %d\n", atoi(argv[1]));
		printf("Resultado ft_atoi: %d\n", ft_atoi(argv[1]));
	}
	return (0);
}
