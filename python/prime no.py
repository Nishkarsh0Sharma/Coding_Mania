def is_prime(num):
    if num <= 1:
        return False
    elif num == 2:
        return True
    elif num % 2 == 0:
        return False

    # Check for factors from 3 to the square root of the number
    for i in range(3, int(num**0.5) + 1, 2):
        if num % i == 0:
            return False

    return True

# Main program
if __name__ == "__main__":
    try:
        num = int(input("Enter a number to check if it's prime: "))
        if is_prime(num):
            print(f"{num} is a prime number.")
        else:
            print(f"{num} is not a prime number.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
