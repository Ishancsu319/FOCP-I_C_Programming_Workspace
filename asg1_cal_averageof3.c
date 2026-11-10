//code for calculating avg of 3 no.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three no.s");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average is %f",(float)(a+b+c)/3);//float typecasted or we can also make 3 as 3.0
    return 0;
}