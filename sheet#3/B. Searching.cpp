#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    long long x;
    std::cin >> x;
    
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }
    
    std::cout << index << "\n";
    return 0;
}
