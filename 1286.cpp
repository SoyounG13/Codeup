#include <cstdio>
int main() {
  int M=-1000000,m=1000000,a;
  for(int i=1;i<=5;i++){
    scanf("%d",&a);
    if(M<a)M=a;
    if(m>a)m=a;
  }
  printf("%d\n%d",M,m);
}
