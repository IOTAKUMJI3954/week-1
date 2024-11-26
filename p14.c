#include<stdio.h>
#include<math.h>
int main()
{
	int m,g,h,v;
	float e;
	printf("Enter the values in order m,g,h,v\n");
	scanf("%d %d %d %d",&m,&g,&h,&v);
	e=m*g*h+0.5*m*v*v;
	printf("The values are %f",e);
	return 0;
}