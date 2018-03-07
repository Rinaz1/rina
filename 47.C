#include <stdio.h>

int main() 
{
	int ar[100];
	int i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n the array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=ar[0];
	int min=ar[0];
	for(i=1;i<n;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
		}
		if(ar[i]<min)
		{
			min=ar[i];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);
}
