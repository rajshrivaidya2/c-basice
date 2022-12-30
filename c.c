#include<stdio.h>
main()
{
	int  a,b,c ;
	printf(" enter the value  a ,b and c");
	scanf(" %d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf(" \n a is gretaer",a);
		
	}
	else if (b>a && b>c)
	
	{
		printf(" \n b is greater",b);
		
	} 
	else if (c>a  && c>b)
	{
		printf(" \n c is greater",c);
	}
}
