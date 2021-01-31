#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		isalnum(int c);
int		ft_isalnum(int c);

int		main(void)
{
	char a = 'r';
	printf("Resultado original de isalnum: %d\n", isalnum(a));
	printf("Resultado ft_isalnum: %d\n", ft_isalnum(a));
	return (0);
}
