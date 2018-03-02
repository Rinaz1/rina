#include <stdio.h>
#include<conio.h>
int main()
{
	char str[50];
	int i,s=0;
  clrscr();
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			s=s+1;
		}
	}
	printf("\nno of white spaces=%d",s);
	return 0;
  getch();
}
