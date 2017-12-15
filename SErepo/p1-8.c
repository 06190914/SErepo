
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, *p;
    a = 10;
    printf("a: %d\n", a);//変数aの中身を出力
    printf("&a: %p\n\n", &a);//変数aのアドレスを出力
    p = &a;
    printf("p: %p\n", p);//ポインタ変数pがさす変数aのアドレスを出力
    printf("*p: %d\n", *p);//ポインタ変数pがさす変数aの中身をだす
    printf("&p: %p\n\n", &p);//ポインタ変数pのアドレスをだす
    a = 20;
    printf("a: %d\n", a);//変数aの中身を出す
    printf("&a: %p\n\n", &a);//変数aのアドレスを出力
    printf("p: %p\n", p);//ポインタ変数pのアドレスを出力
    printf("*p: %d\n", *p);//ポインタ変数pがさす変数aの中身を出力
    printf("&p: %p\n", &p);//ポインタ変数pのアドレスを出力
}
