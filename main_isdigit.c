#include <stdio.h>

int ft_isdigit(int c);

int	main(void)
{
	char number = '1';

	printf("El resultado de %c es %d\n", number, ft_isdigit(number));
	return (0);
}
