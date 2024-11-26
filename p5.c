#include<stdio.h>
int main(){
	int a,b;
	printf("the values of a and b:\n");
	scanf("%d%d",&a,&b);
	int t;
	t=a;
	a=b;
	b=t;
	printf("the updated values of a and b:\n%d\n%d\n",a,b);
	return 0;
}