//code for calculating marks and percentage
#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    printf("enter the marks obtained in 5 subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("total marks are :%d \n percentage is :%f",sum,(sum/500.0)*100);
    return 0;
}