#include<stdio.h>
main()
{
	 float unit ,amt,totalamount,subcharge;
	 printf(" enter unit");
	 scanf("%f",&unit);
	 if(unit <=50)
	 {
	 	amt=unit*0.50;
	 }
	 else if(unit<=150)
	 {
	 	amt =25+(unit-50)*0.75;
	 
	 }
	 else if(unit<=250)
	 {
	 	amt=100+(unit-150)*1.20;
	 }
	 else 
	 {
	 	amt =220+(unit-250)*1.5;
	 	
}
	 subcharge=amt*0.20;
	 totalamount=amt+subcharge;
	 printf("\n electricity bill=%.2f ",totalamount);
}


