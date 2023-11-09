#include <cstdio>

int main(void) {
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d %d",(((a-1)+(b+30)/60)+24)%24,(b+30)%60);
}
