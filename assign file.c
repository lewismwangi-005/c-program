//c files
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num;
    int name;
    char course[100];
    fptr = fopen("/Users/apple/Documents/student.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    else {
        printf("enter a random number:\n");
        scanf("%d", &num);
        printf("enter your name:\n");
        scanf("%d", &name);
        printf("enter your course:\n");
        scanf("%s", course);
        
    
    }
    printf("file opened successfully.\n");
    //write a file
    fprintf(fptr, "%d", num);
    fprintf(fptr, "%d", name);
    fprintf(fptr, "%s", course);
    fclose(fptr);
    return 0;



}