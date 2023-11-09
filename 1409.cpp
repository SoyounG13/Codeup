#include <stdio.h>
int main()
{
	int a[11]={}, b;
	int i, j;
	for(i=1;i<=10;i++)
	{
		scanf("%d\n", &a[i]);
	}
	scanf("%d", &b);
	printf("%d", a[b]);
}
