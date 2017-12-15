// sample 1-6
#include <stdio.h>
int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
      return i;
    }
    i++;
  }
  return 0;
}
int Phantei(int n){
    // 素数かどうかを判定
    int i;
    if(n == 1){
      printf("1 is not a prime number.\n");
      return 0;
    }
    for( i=2;i<n;++i ) {
      if( n%i==0 ) {
        return 0;
      }
    }
    return 1;
}
    

int main(){
    int input;
    int factor;
    int i=0;
    printf("Type in a number: ");
    scanf("%d", &input);
    if(Phantei(input)==1){
      printf("%d is a prime number:",input);
      return 0;
    }
    while(input != 0){
      factor = getSmallestFactor(input);
      input = input/factor;
      if(Phantei(input)==1){
        printf("%d * %d\n",factor,input);
        break;
      }
      printf("%d * ",factor);
      i++;

    }

     return 0;
}
