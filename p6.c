#include<stdio.h>
int main(){
	int a,b;
	printf("the values of and b:\n");
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the updated values of a and b:\n%d\n%d",a,b);
	return 0;
}