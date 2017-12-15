// sample 3-3
#include <stdio.h>
#include <stdlib.h>
typedef struct personData {
  char name[30];
  char address[40];
} person;

typedef struct companyData {
   person ceo;
   person employees[100];

} company;

int main(){
    int i,j,n;
    company *c,*d;
    c = (company*)malloc(sizeof(company)*3);
    d=c;
    for(i = 0; i < 3; i++){
        printf("What is the name of your ceo\n");
        scanf("%s", c->ceo.name);
        printf("What is the address of %s?\n", c->ceo.name);
        scanf("%s", c->ceo.address);
        printf("入力する従業員の数を入力してください.\n");
        scanf("%d",&n);
        for(j = 0; j < n; j++){
          printf("%d Person:who is the employee of %s?\n", j,c->ceo.name);
          scanf("%s", c->employees[j].name);
        }
        c++;
    }
    printf("\n");
    printf("======================================\n");
    c=d;
    for(i = 0; i < 3; i++){
        printf("company ceo%d:%s\n",i,c->ceo.name);
        printf("address%d:%s\n", i,c->ceo.address);
        for(j = 0; j < n; j++){
          printf("%d Person:%s\n", j,c->employees[j].name);
        }
        printf("======================================\n");
        c++;
    }

}
