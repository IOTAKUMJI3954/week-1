#include<stdio.h>
#include<math.h>
int main()
{
	int p,t;
	float r,s,c;
	printf("Enter the principal,rate of interest,time period\n");
	scanf("%d %f %d",&p,&r,&t);
	s=(p*r*t)/100;
	c=p*(pow(1+r/100,t)-1);
	printf("The simple interest is %f\n",s);
	printf("The coumpund interest is %f",c);
	return 0;
}