// (26K-3076) Task-3
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (0 to stop): ");
    scanf("%d", &num);

    while (num != 0) {
        printf("Cube of %d = %d\n", num, num * num * num);
        printf("Enter a number (0 to stop) ");
        scanf("%d", &num);
    }

    printf("You entered 0. Program ended.\n");
    return 0;
}
