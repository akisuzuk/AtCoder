//============================
// 基本入力まとめ
//============================

//------------------------
// 1行1数字(整数)
//------------------------
//int a;           // ※小数にする場合int→floatに変更
//scanf("%d", &a); // ※小数にする場合%d→%fに変更

//------------------------
// 1行1文字
//------------------------
//char c;
//scanf("%c", &c);

//------------------------
// 1行n数字(★配列使用)
//------------------------
//int n, a[100];
//scanf("%d", &n);
//for(int i = 0; i < n; i++){
//    scanf("%d", &a[i]);
//}

//------------------------
// 1行n文字(文字列)
//------------------------
//char S[101];
//scanf("%s", s);   //文字列の場合、&は不要

//入力事例
//6             // 1行目に数字の個数
//7 1 3 5 2 4   // 2行目に実際の数字
// ↓↓↓
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int mx;
    int *buf;
    scanf("%d", &mx);
    buf = malloc(mx*sizeof(*buf));
    for(int i=0; i<mx; i++) {
        scanf("%d", buf+i);     // ←これ、&buf[i]と同義で楽な書き方ね！
    }
    // 確認のため、最期の入力を表示してみる
    printf("Last number => %d \n", buf[mx-1]);

    return 0;
}
*/

//------------------------
// 1行n数字を配列に格納
//------------------------
//一行n文字をintとかdoubleとかflatとかにする
// int a[10];


//------------------------
// n行n数字を配列に格納
//------------------------

// 座標に格納する例。数字少なければ構造体も活用しましょう
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
//    //free忘れない
//    free(coordinates);
//}



























//↓↓↓使えるかわからんけど構造体使わん場合のメモ
//（いつか同じような問題でAC出したらそっちに更新してこれは消す）

//==========================================================
// [contest name]    ABC183
// [question]        C
// [title]           Travel
// [language]        C
// [result]          AC/TLE/WA
// [comment]         xxxx
// [learned]         xxxx
//==========================================================

// 問題だけ確認して寝る

/*
#include<stdio.h>

int main() {
    int N, K;
    int *city;

    scanf("%d, %d", &N, &K);
    city = malloc(N*sizeof(*city));
    for(int i=0; i<N; i++) {
        int a[8];                   // nは高々8だから8でいいか
        for(int j=0; j<N; j++){
            scanf("%d", &a[j]);
        &city[i] = &a
    }

    // 確認のため、配列を出力
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++){
            printf()
     }

    ans = (sx*gy+sy*gx)/(sy+gy);

    printf("%lf", ans);

    // mallocしたからfreeも必要か
    free(city)

    return 0;
}
*/
