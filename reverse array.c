#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("read n:");
	scanf("%d",&n);
	printf("read array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the reversed array is:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
