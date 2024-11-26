#include<stdio.h>
#include<stdlib.h>
int main(){
	int s;
	char n;
	printf("value of s? ");
	scanf("%d",&s);
	int t=s*1000;
	printf("convert it to? ");
	fflush(stdin);
	scanf("%c",&n);
	if (n=='m'){
	    printf("converted to meters:%d",s*1000);}
	else if (n=='cm'){
	    printf("converted to centimeters:%d",t*100);}
	else if (n=='mm'){
	    printf("converted to milimeters:%d",t*1000);}
	return 0;
}