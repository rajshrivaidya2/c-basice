#include<stdio.h>
main()
{
	char ch;
	printf (" enter ch");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf(" \n alphabhta=%c",ch);
		
	}
	else
	{
		printf(" \n alpnhabt=%c",ch);
	}
}
