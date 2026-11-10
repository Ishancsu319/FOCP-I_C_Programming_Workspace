//code for generating a simple invoice for customer
#include<stdio.h>
int main(){
    int id,price,qty,dis,subtotal;
    float discountamount,finalamount;
    printf("enter product id,product price,quantity and discount percentage ");
    scanf("%d%d%d%d",&id,&price,&qty,&dis);
    subtotal=price*qty;
    discountamount=subtotal*dis/100;
    finalamount=subtotal-discountamount;
    printf("Product id is :%d,Subtotal is %d,discount amount is %f,final payable amount is %f",id,subtotal,discountamount,finalamount);
        return 0;

}