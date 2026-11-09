#include <stdio.h>
#include <stdlib.h>

// If you want appendEmployee to be a separate function, it needs a semicolon here:
void appendEmployee(); 

int main() {
    // Changed path to "employees.txt" as required by the question
    FILE *fp = fopen("/Users/apple/Documents/student.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file for appending!\n");
        return 1; // Fixed: main must return an int (like 1 for an error)
    }
    
    int id;
    char name[100];       
    char department[50];  
    
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    
    printf("Enter Full Name: ");
    scanf(" %[^\n]", name);
    
    printf("Enter Department: ");
    scanf(" %[^\n]", department);
    
    fprintf(fp, "ID: %d\nName: %s\nDepartment: %s\n---------------------\n", id, name, department);
    
    fclose(fp);
    printf("Employee record appended successfully.\n");
    
    return 0; // Fixed: standard successful exit return
}
