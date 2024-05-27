#include <iostream>
#include <algorithm>

int main() {
    long long l1, r1, l2, r2;
    std::cin >> l1 >> r1 >> l2 >> r2;

    long long left_boundary = std::max(l1, l2);
    long long right_boundary = std::min(r1, r2);

    if (left_boundary <= right_boundary) {
        std::cout << left_boundary << " " << right_boundary << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }

    return 0;
}
