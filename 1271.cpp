#include <cstdio>

int main() {
  int n,a,m=0;
  scanf("%d",&n);
  for(int i=0;i<=n-1;i++){
    scanf("%d",&a);
    if(m<a){
      m=a;
    }
  }printf("%d",m);

}
