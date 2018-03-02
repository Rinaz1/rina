#include <stdio.h>
int main()
{
	char str[50];
	int i,sum=0;
  clrscr();
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			sum=sum+1;
		}
	}
	printf("\nno of white spaces=%d",sum);
	return 0;
  getch();
}
