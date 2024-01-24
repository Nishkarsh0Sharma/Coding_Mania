def is_perfect_square(number):
    # Check if the number is less than 0 (negative numbers are not perfect squares)
    if number < 0:
        return False

    # Take the square root of the number and convert it to an integer
    square_root = int(number ** 0.5)

    # Check if the square of the integer is equal to the given number
    return square_root * square_root == number

# Get input from the user
try:
    num = int(input("Enter a number: "))
    if is_perfect_square(num):
        print(f"{num} is a perfect square.")
    else:
        print(f"{num} is not a perfect square.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")
