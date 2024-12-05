/*
Write a C program to calculate the average mathematic marks of 5 students.
Input 10 or a negative value to terminate the input process.
*/
/*#include<stdio.h>

void main(){

    float total,average;
    int flag = 0,scount = 0;

    while (flag != -2){

        // printing instruction
        if(flag == 0 || flag == -1){
            printf("Input 10 or a negative value to terminate the input process.\n");
            flag = 1;
        }
        else if(scount<5){
            
            float temp;
            printf("Enter the Total Mark scored by Student %d : ",++scount);
            scanf("%f",&temp);   
            
            if(temp == 10.0 || temp < 0.0){
                scount--;
                printf("input process terminate.\n");
                flag = -2;//terminate the while loop
            }
            else{
                total += temp;
            } 
        }
        else{

            float temp;
            printf("Enter the Total Mark scored by Student %d : ",scount+1);
            scanf("%f",&temp);   
            
            if(temp == 10.0 || temp < 0.0){
                printf("input process terminate.\n");
                flag = -2;//terminate the while loop
            }
            else{
                flag = -1;
                printf("Maximum student count have been reached .\n");
            }
        }
    }
    printf("Average of %d students is %.2f\n",scount,total/scount);

}
*/
#include <stdio.h>
int main() {
    int marks, count = 0;
    float sum = 0.0;
    printf("Enter marks (enter 10 or a negative value to terminate):\n");
    while (count < 5) {
       scanf("%d", &marks);
        if (marks == 10 || marks < 0) break;
        sum += marks;
        count++;
    }
    if (count > 0) {
        printf("The average marks are: %.2f\n", sum / count);
    } 
    else {
        printf("No valid input provided.\n");
    }
    return 0;
}