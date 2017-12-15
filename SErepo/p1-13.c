#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
int main(){
  int  x;
  int  y;

  
printf("２つの整数値を入力してください:\n");
 scanf("%d %d",&x,&y);
 
 printf("変数xの値は, %d 変数yの値は %d です", x, y);

 swap(&x, &y);
 printf("swap()を呼び出した後の変数xの値は, %d 変数yの値は %d です", x, y);
}  

void swap(int *x, int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
