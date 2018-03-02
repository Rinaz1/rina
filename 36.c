
int main()
{
	char sr[50];
	int i,s=0;
  clrscr();
	printf("enter the sentence:");
	scanf("%[^\n]s",sr);
	for(i=0;str[i]!='\0';i++)
	{
		if(sr[i]==' ')
		{
			s=s+1;
		}
	}
	printf("\nno of white spaces=%d",s);
}
