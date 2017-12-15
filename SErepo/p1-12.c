#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int  i; 
  char* p = (char *)malloc(sizeof(char));
  char *str = (char *)malloc(sizeof(char)*100);

  printf("文字列を入力してください:\n"); 
  scanf("%s", str);

  p=&str[0];
   while( *p != '\0'){
     printf("%c", *p);
     p++;
   }
   
   printf("\n");
   
  p--;
  i=0;
  while(i<strlen(str)){
    printf("%c", *p);
    p--;
    i++;
    }
  printf("\n");
  
}
