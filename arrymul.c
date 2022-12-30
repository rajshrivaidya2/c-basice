#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,c1,k;
	printf("enter the row and colume=");
	scanf("%d%d",&r1,&c1);
	printf("\n enter the a matrix");
	for(i=0;i<=r1;i++)
	{
		for(j=0;j<=r1;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n enter b matrix=");
	for(i=0;i<=r1;i++)
	{
		for(j=0;j<=r1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<=r1;j++)
		{
			c[i][j]=0;
			for(k=0;k<=r1;k++)
		c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
		printf("\t%d",c[i][j]);
			
	
		}
		printf("\n ");
		
	}
	}
