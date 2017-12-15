#include <stdio.h>
#include <stdlib.h>
int main(){
  int  i; 
  int* p;
  p= (int *)malloc(sizeof(int)*10);
  int *q=p; 
printf("整数値を 10 個入力して下さい.ひとつ入力するごとに改行を押してください。:\n"); 
    for(i = 0; i < 10; i++)
      {
	scanf("%d", p );
	p++; 
      }
    p=q;
    for(i = 0; i < 10; i++)
      {printf("値：%d アドレス：%p\n", *p, p);
	p++;
	  }
}      
