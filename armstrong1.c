#include<stdio.h>
main()
{
	int i,n,r,sum=0,temp;
	printf("enter the no=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n Armstrong no");
		
	}
	else
	{
		printf("\n not Armstrong no");
	}
}
