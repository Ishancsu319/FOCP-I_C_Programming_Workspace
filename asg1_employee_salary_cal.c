//code  for calculating final salary of an employee
#include<stdio.h>
int main(){
    int salary,allowance,bonus;
    printf("enter the basic salary,aloowance and bonus");
    scanf("%d%d%d",&salary,&allowance,&bonus);
    printf("final salary is %d",salary+allowance+bonus);
    return 0;

}
