#include <stdio.h>
int main()
{
    int day,month,year;
     
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&day,&month,&year);
     
     
 
    if(year>=1200 && year<= 2900)
    {
         
        if(month>=1 && month<=12)
        {
             
            if((day >= 1 && day <= 31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
            {
                printf("The Date you entered is valid.\n");
            }
            else if((day>=1 && day<=30) && (month==4 || month==6 || month==9 || month==11))
            {
                printf("The Date you entered is valid.\n");
            }
            else if((day>=1 && day<=28) && (month==2))
            {
                printf("The Date you entered is valid.\n");
            }
            else if(day==29 && month==2 && (year%400==0 ||(year%4==0 && year%100!=0)))
            {
                printf("The Date you entered is valid.\n");
            }
            else
                printf("The Day you entered is invalid.\n");
        }
        else
        {
            printf("The Month you entered is not valid.\n");
        }
    }
    else
    {
        printf("The Year you entered is not Valid.\n");
    }
     
}
