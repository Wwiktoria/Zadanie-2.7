#include <stdio.h>

int main(void) {
  int a;
  int b;
  printf("Wprowadź liczby: ");
  scanf("%d%d",&a,&b);
  
  if (a>b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("a i b: %d %d",a,b);
  }
  else{
    if (a<2){
      for(int i=2;i<b;i++){
        for(int c=1;c<b;c++){
          if (i%c!=0){
            printf("%d ",i);
          }
          else{
          }
        }
          }
        }
    else{
      for(int i=a;i<b;i++){
        if (a%i!=0){
          printf("%d ",a);
          }
      }
    }
    }
  return 0;
}