#include <cstdio>
int main() {
  int a,s=0;
  scanf("%d",&a);
  for(int i=1;i<=a;i++){
    for(int j=1;j<=i;j++)s+=j;
 }
  printf("%d",s);
}
