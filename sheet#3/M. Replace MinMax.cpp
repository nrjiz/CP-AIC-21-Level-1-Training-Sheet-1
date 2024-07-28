#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    int minVal = std::numeric_limits<int>::max();
    int maxVal = std::numeric_limits<int>::min();
    int minIndex = 0, maxIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    std::swap(arr[minIndex], arr[maxIndex]);

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
