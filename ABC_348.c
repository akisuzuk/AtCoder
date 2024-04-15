
//---A---

/*
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
*/

//---B---

typedef struct s_coordinate
{
	int	x;
	int	y;
}	t_coordinate;

#include <stdio.h>

int	main(void)
{
	int				max_dist;
	int				n;
	int				i;
	int				j;
	t_coordinate	*coordinates;

	scanf("%d", n);
	coordinates = (t_coordinate *)malloc(n * sizeof(t_coordinate));
	if (coordinates == NULL)
		return (1);
	i = 0;
	while (i < n)
	{
		scanf("%d %d", &coordinates[i].x, &coordinates[i].y);
		i++;
	}
	while (i < n)
	{
		while (j < i)
		{
			7777
		}
	}


	return (0);
}

//---C---

//---D---

//---E---
