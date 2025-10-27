print("Hello! Welcome to the Friendly Python Counter 👋")

while True:
    number_input = input("Please enter a positive number to count up to: ")

    if not number_input.isdigit():
        print("Oops! That's not a valid number. Try again.\n")
        continue

    number = int(number_input)

    if number <= 0:
        print("Please enter a number greater than 0.\n")
        continue

    print(f"\nCounting from 1 to {number}:")
    for i in range(1, number + 1):
        print(i)

    print("\nDone counting!\n")

    again = input("Do you want to count again? (y/n): ").strip().lower()
    if again not in ("y", "yes"):
        print("Thanks for using the Friendly Counter! Goodbye 👋")
        break

    print()  # Add a blank line before next count
