#include <iostream>
#include <cmath>
#include <vector>

int main() {
    std::vector<std::string> vector = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p",
                                       "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4"};
    int size;
    std::cout << "What length do you want your password?: ";
    std::cin >> size;
    for (int i = 0; i < size; i++) {
        std::cout << vector[std::rand() % 30];
    }
}