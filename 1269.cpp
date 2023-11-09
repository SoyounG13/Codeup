#include <stdio.h>
int main()
{
    int a,b,c,n,s=0;
    scanf("%d %d %d %d",&a,&b,&c,&n);
      s=a;
      for (int i=2; i<=n; i++){
        s = a*b+c;
        a = s;
    }
    printf("%d",s);
}
