#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("enter value of a:");
	scanf("%d",&a );
	printf("enter value of b:");
	scanf("%d",&b );
	char op;
	printf("enter which operator to be performed:");
	fflush(stdin);
	scanf("%c",&op);
    if (op=='+'){
    	printf("addition of the numbers:%d",a+b);
		}
    else if( op=='-'){
    	printf("subraction of the numbers:%d",a-b);
    }
    else if (op=='*'){
    	printf("multipliaction of the numbers:%d",a*b);
    }
	else if( op=='/'){
		printf("division of the numbers:%d",a/b);
	}
	return 0;
}