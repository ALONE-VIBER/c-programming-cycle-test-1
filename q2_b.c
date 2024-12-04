/*
Execute the linux commands to open a file and Write a C program to compute
whether a given integer is positive even, negative even, positive odd or
negative odd.. Print even if the number is 0. 
*/
#include<stdio.h>

void main(){

    int ak;
    printf("ENTER AN NUMBER : ");
    scanf("%d",&ak);

    if(ak<0){
        printf("%d is negative\n");
    }
    else if(ak>0){
        printf("%d is positive\n");
    }
    else{
        printf("%d is zero\n");
    }

}