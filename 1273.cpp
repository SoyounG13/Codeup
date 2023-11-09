#include <cstdio>

int main(void) {
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i=i+1){
  if(n%i==0 && n!=i){
    printf("%d ",i);
  }if (n==i){printf("%d",n);}
}
}
