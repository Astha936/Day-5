#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Print the top side
    for (i = 1; i <= cols; i++) {
        printf("* ");
    }
    printf("\n");

    // Print the middle part
    for (i = 2; i < rows; i++) {
        printf("* ");
        for (j = 2; j < cols; j++) {
            printf("  "); // Two spaces for the hollow part
        }
        printf("*\n");
    }

    // Print the bottom side
    for (i = 1; i <= cols; i++) {
        printf("* ");
    }
    printf("\n");

    return 0;
}
