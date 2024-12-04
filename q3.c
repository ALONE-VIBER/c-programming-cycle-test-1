/*
Write a C program that checks if three given integers are in the range of 20 to
50 (inclusive) and print true (1) if at least one of them is within the range. If
none of the integers are within the range, the program prints false (0)
*/
#include<stdio.h>

void main(){

    int a[3],i = 1,flag = 0;
    while (i != 4){
        printf("Enter The Integer %d : ",i);
        scanf("%d",&a[(i++)-1]);
    }
    for(i = 0; i<3 ; i++){
        if (a[i]<=50 && a[i]>=20){
            flag = 1;
            break;
        }
    }
    (flag == 1)?printf("True(1)\n"):printf("False(0)\n");

}