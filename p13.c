#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float a1,a2,a3,a4;
	printf("Enter the values\n");
	scanf("%d %d %d",&a,&b,&c);
	a1=a+b*c;
	a2=a*c+0.5*b*c*c;
	a3=2*b+sqrt(a+9*c);
	a4=sqrt(b*b+c*c);
	printf("The values are %f,%f,%f,%f",a1,a2,a3,a4);
	return 0;
}