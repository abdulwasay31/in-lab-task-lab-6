// (26K-3076) Task-8
#include <stdio.h>
int main() {
    float salary[6];
    int above50k = 0;
 for (int i = 0; i < 6; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary[i]);
    }
printf("\nEmployee salaries:\n");
    for (int i = 0; i < 6; i++) {
        printf("Employee %d: %.2f\n", i + 1, salary[i]);
        if (salary[i] > 50000) {
            above50k++;
        }
    }

    printf("Number of employees with salary greater than 50,000: %d\n", above50k);

    return 0;
}
