#include <iostream>
#include <vector>
using namespace std;
 
int countNonDecreasingSubarrays(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    int length = 1; // Length of the current non-decreasing subarray
    
    for (int i = 0; i < n; ++i) {
        count += length;
        if (i < n - 1 && arr[i] <= arr[i + 1]) {
            ++length;
        } else {
            length = 1;
        }
    }
    
    return count;
}
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        cout << countNonDecreasingSubarrays(arr) << endl;
    }
    return 0;
}
