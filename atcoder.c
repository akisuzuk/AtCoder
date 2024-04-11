//============================
// 基本入力まとめ
//============================

// 1行1数字(整数)
//int a;           // ※小数にする場合int→floatに変更
//scanf("%d", &a); // ※小数にする場合%d→%fに変更

// 1行1文字
//char c;
//scanf("%c", &c);

// 1行n数字(★配列使用)
//int n, a[100];
//scanf("%d", &n);
//for(int i = 0; i < n; i++){
//    scanf("%d", &a[i]);
//}

// 1行n文字(文字列)
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

// 1行n数字を配列に格納
// int a[10];



//---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---

//==========================================================
// [contest name]    ABC190
// [question]        A
// [title]           Very Very Primitive Game
// [language]        C
// [result]          AC/TLE/WA
// [comment]         xxxx
// [learned]         xxxx               
//==========================================================

/*
#include<stdio.h>
#include<stdlib.h> // exit用, abs用
#include<math.h> //sqrt, pow用

int main() {


    return 0;
}
*/

//---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---



//==========================================================
// [contest name]    ABC183
// [question]        B
// [title]           Billiards
// [language]        C
// [result]          AC/TLE/WA
// [comment]         xxxx
// [learned]         xxxx               
//==========================================================

// S-XとS-Gのtanが等しいので方程式といてXを出す
// SとGの大小関係でXの式変わるかと思って場合分け組んだけど変わらなくて草
// あっだめだ答えが全部整数になっちまう


#include<stdio.h>

int main() {
    //int sx, sy, gx, gy;
    //float sx, sy, gx, gy, ans;
    //scanf("%f %f %f %f", &sx, &sy, &gx, &gy);
    double sx, sy, gx, gy, ans;
    scanf("%lf %lf %lf %lf", &sx, &sy, &gx, &gy);


    ans = (sx*gy+sy*gx)/(sy+gy);
 
    printf("%lf", ans);

    return 0;
}


// いっこだけミスった??
// in : -1000000 1000000 999999 1000000
// out : -0.5000000000
// いや、合ってるんだが...
// floatだと桁数が足りないか？
// →doubleにしたら直ったわ。競プロは特に型の縛りないしintとdoubleでいいか
// 意外と整数以外の取り扱いについてしっかりやったことなくて時間かかっちまった


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
    scanf("%d, %d", &N, &K);
    // あれっn行n文字ってどうやって入力すりゃいいんだ
    // 上のテンプレみたらmallocっぽい！わかる！分かるぞォォォォォ！
    // つってもいざやると2重配列の作り方が分からん...
    // ※眠いので後日確認、
    // ここmallocとポインタを理解しないと書けないのでpiscineの意味はあったな笑
    int *city;
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