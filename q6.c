/*
Execute the linux commands to open a file and Write a C program that prints
all even numbers between 1 and 50 (inclusive).
*/

/*
step 1 : create an file named 'q6_b.c' 
command: touch q6_b.c

step 2: edit the file 'q6_b.c' on text editor 

step 3: compile the c file
command: gcc q6_b.c -o q6_output

step 4: executing the compiled file
command: ./q6_output
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