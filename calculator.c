#include <stdio.h>
#include <ctype.h>

// Addition function
float add(float x, float y) {
    return x + y;
}

// Subtraction function
float sub(float x, float y) {
    return x - y;
}

// Multiplication function
float mul(float x, float y) {
    return x * y;
}

// Division function
float div(float x, float y) {
    // Check for division by zero
    if (y == 0) {
        printf("Cannot divide by zero\n");
        return 0;
    }
    return x / y;
}

int main() {
    char select;
    float num1, num2, result;

    //infinite while loop to allow users to exit once done
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

        // switch function to call the function selected by the user
        switch (select) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = sub(num1, num2);
                break;
            case '*':
                result = mul(num1, num2);
                break;
            case '/':
                result = div(num1, num2);
                break;
            default:
                printf("Invalid operation. Please try again.\n");
                continue;
        }

        printf("Result: %.3f\n", result);
    }

    printf("Done!\n");
    return 0;
}