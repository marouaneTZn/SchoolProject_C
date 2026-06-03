#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char names[50];
    char dob[50];
    char department[50];
    float score;
};

int main(){

    int choice;

    while (1) {
        printf("\n--- Welcome To Marouane's School ---\n");
        printf("1. Add Student.\n");
        printf("2. Display All students.\n");
        printf("3. Search Student.\n");
        printf("4. Edit Student.\n");
        printf("5. Delete Student.\n");
        printf("6. Statistics.\n");
        printf("7. Exit.\n");
        printf("Enter your choice (1-7): ");
        
        // FIX 1: You must read the input from the keyboard into the 'choice' variable
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                printf("\n---You chose: Display all students - we will build this soon!---\n");
                break;

            case 3:
                printf("\n---You chose: Search student - we will build this soon!---\n");
                break;

            case 4:
                printf("\n---You chose: Edit student - we will build this soon!---\n");
                break;

            case 5:
                printf("\n---You chose: Delete student - we will build this soon!---\n");
                break;

            case 6:
                printf("\n---You chose: Statistics - we will build this soon!---\n");
                break;

            case 7:
                printf("\n---You chose to exit the program. Goodbye!---\n");
                exit(0); 
                break;

            default:
                // Added a default case to handle when someone types a number like 9 or 99
                printf("\nInvalid choice! Please pick a number from 1 to 7.\n");
                break;
        }
    }

    return 0;
}