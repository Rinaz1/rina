#include <stdio.h>
{
	int ar[20];
	int n,i,max=ar[0];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
}
