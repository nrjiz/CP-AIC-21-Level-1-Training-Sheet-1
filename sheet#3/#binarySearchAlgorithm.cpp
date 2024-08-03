// that you were studying for future reference 
#include <iostream>
#include <vector>
#include <algorithm>

bool binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int middle = left + (right - left) / 2;
        
        if (arr[middle] == target) {
            return true;
        }
        if (arr[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    
    return false;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    
    if (binarySearch(arr, target)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }
    
    return 0;
}
