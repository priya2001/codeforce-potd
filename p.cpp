#include <iostream>

int main() {
    for (int i = 0; i < 26; ++i) {
        // Convert 'A' + i to its corresponding character
        char letter = char('A' + i);

        // Print the character
        std::cout << letter << std::endl;
    }

    return 0;
}