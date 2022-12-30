#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	int len;
	printf("\n enter the string=");
	gets (s1);
	printf("\n length of string %s",s1);
	len=strelen(s1);
	printf("\n length of string =%s",len);
	strreb(s1);
	printf(" \n reverse string =%s",s1);
}
