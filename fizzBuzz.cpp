#include <iostream>
#include <chrono> // for sleep
#include <thread> // for sleep

int promptForInput() {
    int target;

    std::cout << "Please enter a number you would like to play fizz buzz up to: " << std::endl;
    std::cin >> target;

    return target;
}


void fizzBuzz(int target) {
    for(int i = 1; i <= target; i++) {
        bool isFizz = (i % 3 == 0);
        bool isBuzz = (i % 5 == 0);

        if (isFizz && isBuzz) {
            std::cout << "FizzBuzz\n";
        } else if (isFizz) {
            std::cout << "Fizz\n";
        } else if (isBuzz) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << '\n';
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // sleep for 2 seconds
    }
}


int main() {
    int target = promptForInput();

    fizzBuzz(target);

    return 0;
}
