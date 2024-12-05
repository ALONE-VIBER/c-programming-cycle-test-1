/*
Execute the linux commands to open a file and Write a C program to compute
whether a given integer is positive even, negative even, positive odd or
negative odd.. Print even if the number is 0. 
*/
/*
step 1 : create an file named 'q2_b.c' 
command: touch q2_b.c

step 2: edit the file 'q2_b.c' on text editor 

step 3: compile the c file
command: gcc q2_b.c -o q2_output

step 4: executing the compiled file
command: ./q2_output
*/

#include<stdio.h>

void main(){

    int ak;
    printf("ENTER AN NUMBER : ");
    scanf("%d",&ak);

    if(ak<0){
        printf("%d is negative ");
        if(ak%2==0){
            printf(" even");
        }
        else{
            printf(" odd");
        }
    }
    else if(ak>0){
        printf("%d is positive ");
        if(ak%2==0){
            printf(" even");
        }
        else{
            printf(" odd");
        }
    }
    else{
        printf("%d is zero\n");
    }

}
/* output
ENTER AN NUMBER : 123
123 is positive  odd
*/