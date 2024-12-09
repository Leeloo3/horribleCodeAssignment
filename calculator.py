# Addition function
def add(x, y):
    return x + y

# Subtraction function
def sub(x, y):
    return x - y

# Multiplication function
def mul(x, y):
    return x * y

# Division function
def div(x, y):
    if y == 0:
        print("Cannot divide by zero")
        return None
    return x / y

# Main function
def main():
    #infinite while loop to allow users to exit once done
    while True:
        select = input("Select an operation (+, -, *, /) or 'c' to cancel: ").lower()
        if select == 'c':
            break

        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        # If else logic to call the function selected by the user
        if select == '+':
            result = add(num1, num2)
        elif select == '-':
            result = sub(num1, num2)
        elif select == '*':
            result = mul(num1, num2)
        elif select == '/':
            result = div(num1, num2)
            if result is None:
                continue
        else:
            print("Invalid operation. Please try again.")
            continue

        print(f"Result: {result:.3f}")

if __name__ == "__main__":
    main()
