#include <iostream>
#include <cstdlib>
#include <ctime>

void mathQuizGame() {
    int min, max, range, score = 0, answer;
    std::cout << "\n[ Math Quiz Game ]\n";
    std::cout << "Enter minimum number: "; std::cin >> min;
    std::cout << "Enter maximum number: "; std::cin >> max;
    if (min >= max) {
        std::cout << "Error: Max must be greater than min.\n";
        return;
    }

    srand(static_cast<unsigned>(time(nullptr)));
    range = max - min + 1;

    for (int i = 1; i <= 2; ++i) {
        int a = rand() % range + min;
        int b = rand() % range + min;
        std::cout << "Question " << i << ": What is " << a << " + " << b << "? ";
        std::cin >> answer;
        if (answer == a + b) {
            std::cout << "Correct!\n";
            ++score;
        } else {
            std::cout << "Incorrect. The correct answer is " << (a + b) << ".\n";
        }
    }
    std::cout << "Your final score: " << score << " out of 2.\n";
}

int main() {
    mathQuizGame();
    return 0;
}
