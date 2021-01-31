#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		isascii(int c);
int		ft_isascii(int c);

int		main(void)
{
	char a = 10;
	printf("Resultado original de isascii: %d\n", isascii(a));
	printf("Resultado ft_isascii: %d\n", ft_isascii(a));
	return (0);
}
