#include <cstdio>

int main(void) {
  int a,b,s;
  s=0;
  scanf("%d",&a);
  for(int i=1;i<=a;i++){
    scanf("%d",&b);
    s=s+b;
  }printf("%d",s);
  return 0;
}
