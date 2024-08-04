#include <iostream>
#include <string>
 
int main() {
    std::string S;
    std::string T;
 
    std::getline(std::cin, S);
    std::getline(std::cin, T);
 
    std::cout << S.length() << " " << T.length() << '\n';
    std::cout << S << ' ' << T << '\n';
 
    return 0;
}
