#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		if (i % 3 == 0)
			printf("x");
		else
			printf("o");
		i++;
	}
	return (0);
}
