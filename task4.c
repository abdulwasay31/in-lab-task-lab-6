// (26K-3076) Task-4
#include <stdio.h>
int main() {
    float marks[100];   
    int count = 0;
    int choice;
do {
        printf("Enter marks of student %d: ", count + 1);
        scanf("%f", &marks[count]);
        count++;
 printf("Enter marks for another student? (1 = Yes, 0 = No)");
        scanf("%d", &choice);
    } while (choice == 1 && count < 100);

    printf("\nMarks entered:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }
    printf("Total number of students: %d\n", count);

    return 0;
}
