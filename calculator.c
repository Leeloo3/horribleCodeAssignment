#include <stdio.h>

// addition function
float add(float x, float y){
    return x + y;
}

// subtraction function
float sub(float x, float y){{
    return x - y;
}

// multiplication function
float mul(float x, float y){
    return x * y;
}

// division function
float div(float x, float y){
    // check for division by zero (not possible)
    if (y == 0){
        printf("Cannot divide by zero");
        return 0;
    }
    return x / y;
}

int main(){
    char select;
    float num1, num2, answer;

    while(1){
        printf("Select an operation (+, -, *, /) or 'c' to cancel");
        scanf("%c", &select);

        select = tolower(select);

        if (select == 'c'){
            break;
        }

         printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                if (num2 == 0) {
                    continue; // Skip to the next iteration if division by zero
                }
                break;
            default:
                printf("Invalid operation. Please try again.\n");
                continue;
        }

        printf("Result: %.2f\n", result);
    }

    printf("Thank you for using the calculator!\n");
    return 0;

    }
}