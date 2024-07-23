//O(n)solution:
#include <iostream>
#include <vector>
#include <limits>
 
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> arr[i];
        }
 
        int minAiMinusI = std::numeric_limits<int>::max();
        int minResult = std::numeric_limits<int>::max();
 
        for (int j = 1; j < N; ++j) {
            minAiMinusI = std::min(minAiMinusI, arr[j - 1] - (j - 1));
            int result = arr[j] + j + minAiMinusI;
            minResult = std::min(minResult, result);
        }
 
        std::cout << minResult << "\n";
    }
    return 0;
}



///////
#include<iostream>
#include<limits>
#include<vector>

int main(){
    
    int T;
    std::cin>>T;
    while(T--){
        int N;
        std::cin>>N;
        std::vector<int>arr(N);
        for(int i=0;i<N;++i){
            std::cin>>arr[i];
        }
        int min = std::numeric_limits<int>::max();
        for(int i=0;i<N-1;++i){
            
            for(int j=i+1;j<N;++j){
                int result=j-i+arr[i]+arr[j];
                if(result<min){
                    min=result;
                }
            }
        }
        std::cout<<min<<"\n";
    }
}
