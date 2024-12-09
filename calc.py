def main():
    while True:
        select = input("Select an operation (+, -, *, /) or 'c' to cancel: ").lower()
        if select == 'c':
            break

        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if select == '+':
            result = num1 + num2
        elif select == '-':
            result = num1 - num2
        elif select == '*':
            result = num1 * num2
        elif select == '/':
            if num2 == 0:
                print("Cannot divide by zero")
                continue
            result = num1 / num2
        else:
            print("Invalid operation. Please try again.")
            continue

        print(f"Result: {result:.3f}")

if __name__ == "__main__":
    main()
