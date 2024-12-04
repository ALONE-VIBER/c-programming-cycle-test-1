/*
Write a C program to print all numbers between 1 and 100 which are divided
by a  specified number given by the user and the remainder will be 3
*/
#include<stdio.h>

void main(){

    int div;
    printf("Enter the value of div : ");
    scanf("%d",&div);

    for(int i = 1; i<=100 ; ++i){
        if(i%div == 3){
            printf("%d\n",i);
        }
    }
}
