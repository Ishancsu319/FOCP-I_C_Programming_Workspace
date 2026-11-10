//code to accept and display user details 
#include<stdio.h>
int main (){
    int age;
    float height;
    char grade;
    printf("enter age:");
    scanf("%d",&age);
    printf("enter height:");
    scanf("%f",&height);
    printf("enter grade:");
    scanf(" %c",&grade); // here space is given before %c to ignore leftover chars
    printf("age:%d\nheight:%f\ngrade:%c",age,height,grade);
    return 0;
}