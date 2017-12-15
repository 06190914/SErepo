#include <stdio.h>
#include <stdlib.h>

typedef struct personData {
  char id[10];
char name[40];
int  price;
} person;

int main(){
int i = 0;
person items[100];


while( scanf("%s %s %d", items[i].id, items[i].name,
&(items[i].price)) != EOF){
   printf("商品コード：%s\n",items[i].id);
    printf("商品名：%s\n",items[i].name);
    printf("値段：%d\n",items[i].price);
    printf("\n");
    i++;
  }
  return 0;
}


