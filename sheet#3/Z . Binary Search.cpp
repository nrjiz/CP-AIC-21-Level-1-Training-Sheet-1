#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

bool binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            return true;
        } else if (target > arr[middle]) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return false;
}

int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> arr(n);
    
    // Read the array
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    // Sort the array
    std::sort(arr.begin(), arr.end());
    
    // Process each query
    while (q--) {
        int searching_for;
        std::cin >> searching_for;
        if (binarySearch(arr, searching_for)) {
            std::cout << "found\n";
        } else {
            std::cout << "not found\n";
        }
    }
}
