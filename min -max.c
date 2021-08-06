#include<stdio.h>
int main()
{
	int a[10],n,i;
	int max,min;
	printf("read n:");
	scanf("%d",&n);
	printf("read array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
     }
     max=a[0];
	 min=a[0];
	 for(i=0;i<n;i++)
	 {
	 	if(max<a[i])
		 max=a[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	if(min>a[i])
		 min=a[i];
	 }
	 printf("max=%d\n",max);
	 printf("min=%d",min);
  return 0;
}
