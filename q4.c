/*
Write a program in C which is a Menu-Driven Program to perform a simple
arithmetic calculation
*/
#include<stdio.h>

void main(){

    int x,y;
    
    char operator;
    printf("Enter Your Calculation \n ex --> 50+50\n :");
    scanf("%d%c%d",&x,&operator,&y);
    
    switch(operator){
        case '+':
            printf("sum of %d and %d is %d\n",x,y,x+y);
            break;

        case '-':
            printf("difference of %d and %d is %d\n",x,y,x-y);
            break;
        
        case '*':
            printf("product of %d and %d is %d\n",x,y,x*y);
            break;

        case '/':
            printf("division of %d and %d is %d\n",x,y,x/y);
            break;
        
        case '%':
            printf("modulus of %d and %d is %d\n",x,y,x%y);
            break;
        
        default:
            printf("invalid arithematic operator.\n");
            break;
    } 

}