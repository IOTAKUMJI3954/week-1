#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter all five subject marks:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("marks in all the subjects: \n%d\n %d\n %d\n %d\n %d\n",a,b,c,d,e);
    printf("percentage of the marks of the student:%d%%",((a+b+c+d+e)/5));
    return 0;
}