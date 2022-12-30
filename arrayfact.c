#include<stdio.h>
int fact (int n)
{
	int ans,n;
	printf(" enter n=");
	scanf("%d",&n);
	ans=fact(n)
	printf("\n factrocal=%d",ans);
	
	}
	int fact(int n)
	{
		int f=1;
		if(n==1)
		
		{
			return1;
			
		}
		else{
			f=n*fact(n-1);
			
		}
		return f;
		
	}
