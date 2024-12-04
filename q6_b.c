/*
Execute the linux commands to open a file and Write a C program that prints
all even numbers between 1 and 50 (inclusive).
*/
#include<stdio.h>

void main(){

    printf("EVEN NUMBERS BETWEEN 1 AND 50\n");
    for (int i = 1 ; i <= 50; ++i){
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }

}   