#include <iostream>
#include <string>

/**
 * @brief Simple interactive counter program in C++.
 * * The program initializes a counter to zero and prompts the user to input
 * '+' to increment, '-' to decrement, or 'q' to quit.
 */
void run_counter_program() {
    // Initialize the counter variable
    int count = 0;
    std::string input;

    std::cout << "--- C++ Interactive Counter Program ---" << std::endl;
    std::cout << "Current Count: " << count << std::endl;
    std::cout << "Enter '+' to increment, '-' to decrement, or 'q' to quit." << std::endl;

    // Loop until the user decides to exit
    while (true) {
        std::cout << "\nAction (+/- or q): ";
        
        // Read the user's input
        if (!(std::cin >> input)) {
            // Handle EOF or input error gracefully
            break;
        }

        if (input == "+") {
            count++;
            std::cout << "Count incremented." << std::endl;
        } else if (input == "-") {
            count--;
            std::cout << "Count decremented." << std::endl;
        } else if (input == "q" || input == "Q") {
            std::cout << "\nExiting Counter Program." << std::endl;
            break; // Exit the loop
        } else {
            // Treat any other input as a request to quit, as requested by the prompt
            std::cout << "\nInvalid input. Exiting Counter Program." << std::endl;
            break; 
        }

        // Always display the current count after an operation
        std::cout << "Current Count: " << count << std::endl;
    }
}

/**
 * @brief Main function to start the counter program.
 */
int main() {
    run_counter_program();
    return 0;
}
