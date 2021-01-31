/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:29:58 by anfernan          #+#    #+#             */
/*   Updated: 2021/01/30 16:36:26 by anfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		isprint(int c);
int		ft_isprint(int c);

int		main(void)
{
	char a = 127;
	printf("Resultado original de isprint: %d\n", isprint(a));
	printf("Resultado ft_isprint: %d\n", ft_isprint(a));
	return (0);
}
