#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    std::vector<int> b(m);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }

    // Sort array b in non-decreasing order
    std::sort(b.begin(), b.end(), std::greater<int>());

    // Match the largest b values with the largest a values
    for (int i = 0; i < n; ++i) {
        a[i] = std::max(a[i], b[i]);
    }

    // Calculate the maximum difference D
    int maxDifference = 0;
    for (int i = 0; i < n; ++i) {
        maxDifference += std::abs(a[i] - b[i]);
    }

    // Print the result
    std::cout << maxDifference << std::endl;

    return 0;
}
