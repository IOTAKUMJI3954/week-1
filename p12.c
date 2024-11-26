#include<stdio.h>
int main()
{
	int d,y;
	printf("Enter the number of days\n");
	scanf("%d",&d);
	y=d/365;
	printf("The number of years and remaining days are %d and %d",y,d-y*365);
	return 0;
}