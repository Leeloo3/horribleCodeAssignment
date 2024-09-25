#include <stdio.h>
#include <ctype.h>

int main() {
    char select;
    float num1, num2, result;

    while (1) {
        printf("Select an operation (+, -, *, /) or 'c' to cancel: ");
        scanf(" %c", &select);

        select = tolower(select);

        if (select == 'c') {
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        if (select == '+') {
            result = num1 + num2;
        } else if (select == '-') {
            result = num1 - num2;
        } else if (select == '*') {
            result = num1 * num2;
        } else if (select == '/') {
            if (num2 == 0) {
                printf("Cannot divide by zero\n");
                continue;  
            }
            result = num1 / num2;
        } else {
            printf("Invalid operation. Please try again.\n");
            continue;
        }

        printf("Result: %.3f\n", result);
    }

    printf("Done!\n");
    return 0;
}
