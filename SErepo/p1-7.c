#include<stdio.h>

double fact(int n);
int main(){
  int num;
  printf("数値を入力してください.\n");
  scanf("%d",&num);
  printf("%lf\n",fact(num));
}

double fact(int n){

  if(n <= 0)return 1;
  else{
    return n * fact(n-1);
  }
}
