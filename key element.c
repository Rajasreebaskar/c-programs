#include<stdio.h>
int main()
{
	int a[10],n,i;
	int key;
	int count=0;
	printf("read n:");
	scanf("%d",&n);
	printf("read array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		  count++;
	}
	if(count>=1)
	   printf("key is present");
	else
	   printf("key is absent");
 return 0;
}
