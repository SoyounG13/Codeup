#include <cstdio>

int main(void) {
  int a,b;
  b=0;
  scanf("%d",&a);
  
  for(int i=1;i<=a;i++){
    if(i%10==1){
      b+=1;
    }
  }printf("%d",b);

}
