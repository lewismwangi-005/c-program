//Author:lewis wangai
//Date:18/9/2026
//Reg no:bcs-05-0212/2026
//Description:a c program on requirements to acquire a loan

#include <stdio.h>
int main(void) {
    int age;
    long income;
    printf("Enter age to get loan:");
    scanf("%d", &age);
    printf("Enter annual income:");
    scanf("%ld", &income);
    
    //check loan eligibility
    if(age >= 21 && income >= 21000)
    {

    printf("Congratulations u have qualified for a loan.\n");
    }

    else
    {

    printf("Unfortunately we were unable to offer a loan at this time.\n");
    }

return 0;
}       





