// (26K-3076) Task-5
#include <stdio.h>
int main() {
    float temp[7];
    float total = 0;
    int above100 = 0;
 for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);
 total += temp[i];
        if (temp[i] > 100) {
            above100++;
        }
    }

    printf("\nTotal temperature: %.2f\n", total);
    printf("Number of temperatures greater than 100: %d\n", above100);

    return 0;
}
