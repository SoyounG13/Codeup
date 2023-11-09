#include <cstdio> 

int main(void) {
  int a;
  scanf("%d", &a);

  if (50<=a && a<=70){
    printf("win");
  } else if (a%6==0){
    printf("win");
  }else
    printf("lose");
}
