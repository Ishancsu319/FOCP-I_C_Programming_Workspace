//code for swapping 2no.s
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 2 no.s");
    scanf("%d%d",&a,&b);
    printf("before swapping:a=%d b=%d",a,b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("after swapping:a=%d b=%d",a,b);
    return 0;
}