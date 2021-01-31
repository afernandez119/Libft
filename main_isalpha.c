#include <stdio.h>

int ft_isalpha(int c);

int	main(void)
{
	char text = 'a';

	printf("El resultado de %c es %d\n", text, ft_isalpha(text));
	return (0);
}
