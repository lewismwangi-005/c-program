//Author:lewis wangai
//Date:18/9/2026
//Reg no:bcs-05-0212/2026
//Description:a c program on requirements to acquire area and volume

#include <stdio.h>
int main(void) {
    int days_overdue;
    long amount;
    int book_id;
    int due_date;
    int fine_rate;
    int fine_amount;
    int return_date;


    printf("enter the Book_id:");
    scanf("%d", & book_id);
    printf("enter the due_date:");
    scanf("%d", & due_date);
    printf("enter the return_date:");
    scanf("%d", & return_date);

    //calculate the days over_due
    days_overdue = return_date - due_date;

    //enter the charges eligibility
    if (days_overdue > 0 && days_overdue < 7 && fine_rate == 20) {
        printf("Charge eligibility confirmed.\n");
    } else if (days_overdue > 8 && days_overdue < 11 && fine_rate == 50) {
        printf("Charge eligibility confirmed.\n");
    } else if (days_overdue >= 15 && fine_rate == 100) {
        printf("Charge eligibility confirmed.\n");
    } 

    {
        fine_amount = days_overdue * fine_rate;

        //display the results
        printf("Book_id: %d\n", book_id);
        printf("Due_date: %d\n", due_date);
        printf("Return_date: %d\n", return_date);
        printf("Days_overdue: %d\n", days_overdue);
        printf("Fine_amount: %d\n", fine_amount);
        printf("fine_rate: %d\n", fine_rate);

    }
    return 0;
}