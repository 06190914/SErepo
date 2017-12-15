#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct list{
	char name[20];
	struct list *next;
}list;

struct list *listadd(char *,struct list *);
void listmiru(struct list *);

int main(void){
	char data[20];
	list *head = NULL; 

	while(scanf("%s",data)!=EOF){
		head = listadd(data,head);
	}

	listmiru(head);

	return 0;

}

//ノードを追加する関数
struct list *listadd(char *d,list *h){

	list *p;
	p = malloc(sizeof(list));

	strcpy(p->name,d);
	p->next = h;

	return p;

}

//リストを表示する関数
void listmiru(list *p){
  while(p!=NULL){   //次ポインタがNULLまで処理する
		printf("%s -> ",p->name);
		p=p->next;
	}
	printf("NULL\n");
}
