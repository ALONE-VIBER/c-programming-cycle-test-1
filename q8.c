/*
Write a C program to print a number , its square and cube, starting with 1 and
printing n lines. Accept the number of lines(n, integer) from the user.
*/
#include<stdio.h>

void main(){

    int n;
    // input
    printf("No Of Lines : ");
    scanf("%d",&n);
    // output 
    printf("NUMBER | SQUARE | CUBE\n");
    for(int i=1 ; i <= n ; ++i){
       printf("%d | %d | %d\n",i ,i*i ,i*i*i); 
    }

}