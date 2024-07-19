#include <iostream>
using namespace std;

// Precompute the factorials of numbers from 0 to 20
void precomputeFactorials(unsigned long long factorials[]) {
    factorials[0] = 1;
    for (int i = 1; i <= 20; ++i) {
        factorials[i] = factorials[i - 1] * i;
    }
}

int main() {
    int T;
    cin >> T;

    unsigned long long factorials[21];
    precomputeFactorials(factorials);

    while (T--) {
        int N;
        cin >> N;
        cout << factorials[N] << endl;
    }

    return 0;
}
