#include <iostream>
#include <sstream>

int main() {
    std::string str;
    int count = 0;

    std::getline(std::cin, str);

    // Replace symbols ('!', '.', '?', and ',') with spaces
    for (char &c : str) {
        if (c == '!' || c == '.' || c == '?' || c == ',') {
            c = ' ';
        }
    }

    // Use stringstream to split the string into words
    std::stringstream ss(str);
    std::string word;

    // Count the number of words
    while (ss >> word) {
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}
