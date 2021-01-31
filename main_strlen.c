#include <stdio.h>

int	ft_strlen(const char *s);

int	main(void)
{
	char text[] = "a";
	printf("Longitud de la palabra %s es %d\n", text, ft_strlen(text)); 
	return (0);
}

