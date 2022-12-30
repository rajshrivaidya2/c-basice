 #include<stdio.h>
 main()
 {
 	int i,fact=1,n;
 	printf("enter no is ");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		if(i%3==0|| i%5==0)
 		{
 			printf("\n no is diviables by 3 or 5=%d",n);
		 }
	 }
 }
