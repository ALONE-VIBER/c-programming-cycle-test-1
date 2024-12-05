/*
Write a C program to compute the sum of the first 10 natural numbers
*/
#include<stdio.h>

void main(){

    int sum = 0 ;
    for(int natural = 1; natural < 11; ++natural){
        sum += natural;//sum = sum + natural
    } 
    printf("sum of the first 10 natural numbers : %d\n",sum);
 
}