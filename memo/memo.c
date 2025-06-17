//メモ
/*memo*/
#include<stdio.h>

int main () {
    int a;                 //-10^9~10^9
    long long b;           //-10^18~10^18
    unsigned long long c;  // 0~1.8*10^19
    int A,B,ans;
    scanf("%d",&A);//変数Aに入力 変数名の前に”＆”が必要
    printf("こんにちは");//「こんにちは」と出力
    printf("%d,&A");//変数Aに入っている値を出力
    printf("%d",A);//変数名の前の”＆”がいらない
    //足し算 [AにBを足してansに出力する場合]
    scanf("%d%d",&A,&B);
    ans=A+B;
    printf("Ans=%d\n",ans);

    //引き算 [AからBを引いてansに出力する場合]
    scanf("%d%d",&A,&B);
    ans=A-B;
    printf("Ans=%d\n",ans);

    //かけ算 [AにBをかけてansに出力する場合]
    scanf("%d%d",&A,&B);
    ans=A*B;
    printf("Ans=%d\n",ans);

    //割り算 [AをBで割ってansに出力する場合]
    scanf("%d%d",&A,&B);
    ans=A/B;
    printf("Ans=%d\n",ans);
    //scanfの（%d%d）の間にカンマ（,）を入れると、入力時に「値,値」と入力する。

    //a=13と定義したのち、a=a+9をする場合、a+=9; とすることで簡略化できる。（複合代入演算)
/*********if文 ***********/    

//条件式でよく使われるもの
    /*AとBが等しい
    A==B
    AはBより大きい
        A>B
    AはBよりも小さい
        A<B
    AはB以上
        A>=B
    AはB以下
        A<=B
    P1またはP2(OR)
        P1||P2
    P1かつP2(AND)
        P1&&P2
    P1でない
        !(P1)
    AとBが異なる
        A!=B*/
/******while文******/
/*While(条件){
    処理
}            */
