//c files
#include <stdio.h>
#include <stdlib.h>
 int main() {
    FILE *fptr;
    char records [300];
    char display [300];
    fptr = fopen("/Users/apple/Documents/student.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    printf("read students records and display student records stored in the file:\n");
    fgets(records, sizeof(records), stdin);
    //write a file
    fprintf(fptr, "Student Records: %s", records);
    fclose(fptr);
    printf("Data written to file successfully .\n");
    return 0;
}