#include <stdio.h>
#include <stdlib.h>
int main(){
  int  i; 
  char* p = (char *)malloc(sizeof(char));
  char *str = (char *)malloc(sizeof(char)*10);
  
  char *q=p; 
printf("文字を 10 個入力して下さい.ひとつ入力するごとに改行を押してください。:\n");

 for(i = 0; i < 10; i++)
   {
     scanf("%s", str);
     *p = str[0];
     p++;
   }
 
    p=q;
    for(i = 0; i < 10; i++)
      {
	printf("文字: %c アドレス：%p\n", *p, p);
	p++;
       }

}      
