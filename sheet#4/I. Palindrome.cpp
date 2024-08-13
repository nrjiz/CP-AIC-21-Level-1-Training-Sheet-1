#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::cin >> inputString;
    
    for (int i = 0; i < inputString.length() / 2; ++i) {
        if (inputString[i] != inputString[inputString.length() - 1 - i]) {
            std::cout << "NO\n";
            return 0;
        }
    }
    
    std::cout << "YES\n";
    return 0;
}
