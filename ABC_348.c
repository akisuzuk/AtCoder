
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

typedef struct s_bean
{
	int	a;
	int	c;
}	t_bean;

int	main()
{
	int	n;
	int	i;
	t_bean	*beans;

	scanf("%d", &n);
	beans = (t_bean *)malloc(n * sizeof(t_bean));
	if (beans == NULL)
		return (1);
	i = 0;
	while (i < n)
	{
		scanf("%d %d", &beans[i].a, &beans[i].c);
		i++;
	}

	free(beans);
	return (0);
}

//このコードいい感じっす.qsortの理解は必須

//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct{
//    int a,c;
//}data;
//
//int func(const void *a,const void *b){
//    const data *A=a,*B=b;
//    if(A->c > B->c)return 1;
//    if(A->c==B->c){
//        if(A->a > B->a)return 1;
//        if(A->a==B->a)return 0;
//        return -1;
//    }
//    return -1;
//}
//
//int main(){
//
//    int n;
//    int a[200002],c[200002];
//    scanf("%d",&n);
//    data x[200002];
//    for(int i=0;i<n;i++){
//        scanf("%d%d",&a[i],&c[i]);
//        x[i].a=a[i]; x[i].c=c[i];
//    }
//    qsort(x,n,sizeof(data),func);
//
//    int min=0;
//    for(int i=0;i<n;){
//        int j=i;
//        if(x[i].a > min)min=x[i].a;
//        while(i<n && x[i].c==x[j].c)i++;
//    }
//    printf("%d",min);
//    return 0;
//}



//==========================================================
// [contest name]	ABC348
// [question]		D
// [title]			XXXX
// [language]		C
// [result]			AC/TLE/WA
// [comment]		xxxx
// [learned]		xxxx
//==========================================================




//==========================================================
// [contest name]	ABC348
// [question]		E
// [title]			XXXX
// [language]		C
// [result]			AC/TLE/WA
// [comment]		xxxx
// [learned]		xxxx
//==========================================================



