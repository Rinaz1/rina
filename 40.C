#include <stdio.h>
int main()
{
int i, n,f=0,m=1,sum;
clrscr();
printf("Enter series range:");
scanf("%d",&n);
printf("Fibonacci Series:");
for(i=0;i<n;i++)
{
printf("\n%d",f);
sum=first+m;
first=m;
m=sum;
}
}
