#include <iostream>

int main() {
    int N;
    std::cin >> N;

    bool foundEven = false;

    for (int i = 2; i <= N; i += 2) {
        std::cout << i << std::endl;
        foundEven = true;
    }

    if (!foundEven) {
        std::cout << -1 << std::endl;
    }

    return 0;
}
