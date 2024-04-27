
//==========================================================
// [contest name]	ABC348
// [question]		A
// [title]			XXXX
// [language]		C
// [result]			AC
// [comment]		xxxx
// [learned]		xxxx
//==========================================================

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

//==========================================================
// [contest name]	ABC348
// [question]		B
// [title]			XXXX
// [language]		C
// [result]			AC
// [comment]		xxxx
// [learned]		xxxx
//==========================================================

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//typedef struct s_coordinate
//{
//	int	x;
//	int	y;
//}	t_coordinate;
//
//int	main(void)
//{
//	int				max_dist;
//	int				dist;
//	int				n;
//	int				i;
//	int				j;
//	int				ans;
//	t_coordinate	*coordinates;
//
//	scanf("%d", &n);
//	coordinates = (t_coordinate *)malloc(n * sizeof(t_coordinate));
//	if (coordinates == NULL)
//		return (1);
//	i = 0;
//	while (i < n)
//	{
//		scanf("%d %d", &coordinates[i].x, &coordinates[i].y);
//		i++;
//	}
//	dist = 0;
//	i = 0;
//	while (i < n)
//	{
//		max_dist = 0;
//		j = 0;
//		ans = 0;
//		while (j < n)
//		{
//			dist = pow(coordinates[i].x - coordinates[j].x, 2) + \
//					pow(coordinates[i].y - coordinates[j].y, 2);
//			if (dist > max_dist)
//			{
//				max_dist = dist;
//				ans = j;
//			}
//			j++;
//		}
//		printf("%d\n", ans + 1);
//		i++;
//	}
//	free(coordinates);
//	return (0);
//}

//==========================================================
// [contest name]	ABC348
// [question]		C
// [title]			Colorful Beans
// [language]		C
// [result]			AC/TLE/WA
// [comment]		xxxx
// [learned]		xxxx
//==========================================================

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct s_bean
//{
//	int	a;
//	int	c;
//}	t_bean;
//
//// 要素を比較して順番が入れ替わる時は正の値、入れ替わらない時は負の値を返す
//// 同じ値の場合は0を返す
//int	func(const void *a, const void *b)
//{
//	const t_bean	*A;
//	const t_bean	*B;
//
//	// void*型のポインタを元の型にキャスト
//	A = a;
//	B = b;
//	if (A->c > B->c)
//		return (1);
//	if (A->c == B->c)
//	{
//		if (A->a > B->a)
//			return (1);
//		if (A->a == B->a)
//			return (0);
//		// 順番変わらないなら負の値を返す
//		return (-1);
//	}
//	return (-1);
//}
//
//int	main(void)
//{
//	int		n;
//	int		i;
//	int		j;
//	t_bean	*beans;
//	int		min;
//
//	scanf("%d", &n);
//	beans = (t_bean *)malloc(n * sizeof(t_bean));
//	if (beans == NULL)
//		return (1);
//	i = 0;
//	while (i < n)
//	{
//		scanf("%d %d", &beans[i].a, &beans[i].c);
//		i++;
//	}
//	// qsortはソートする要素の型を指定できるため、
//	// その型が何であるか事前にわからないことがあります。
//	// そのため、qsortはすべての要素をvoid*型として扱います。
//	// 特定の型で答えを出したい場合は最後に必要に応じてキャストする
//	qsort(beans, n, sizeof(t_bean), func);
//
//	i = 0;
//	j = 0;
//	min = 0;
//	while(i < n)
//	{
//		j = i;
//		if (beans[i].a > min)
//			min = beans[i].a;
//		while (i < n && beans[i].c == beans[j].c)
//			i++;
//	}
//	printf("%d\n", min);
//	free(beans);
//	return (0);
//}


//==========================================================
// [contest name]	ABC348
// [question]		D
// [title]			Medicines on Grid
// [language]		C
// [result]			AC/TLE/WA
// [comment]		xxxx
// [learned]		xxxx
//==========================================================

#include <stdio.h>
#include <stdlib.h>

typedef struct s_map
{
	int	h;
	int	w;
	int	e;
}	t_map;


int	main(void)
{
	int h_size;
	int w_size;

	scanf("%d %d", &h_size, &w_size);

	return (0);
}




//==========================================================
// [contest name]	ABC348
// [question]		E
// [title]			XXXX
// [language]		C
// [result]			AC/TLE/WA
// [comment]		xxxx
// [learned]		xxxx
//==========================================================



